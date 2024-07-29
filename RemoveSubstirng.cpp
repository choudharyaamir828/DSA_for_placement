#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//using iteration
void remove_all_substr(string& s,string part){
    int pos = s.find(part);
    while(pos != string::npos){
        s.erase(pos,part.length());
        pos = s.find(part);
    }

    return;
}


//using recursion
void removeSubstring(string& s, string part){
    //find substring
    int found = s.find(part);

    // ek case 
    if(found != string::npos){
        string left = s.substr(0,found);
        string right = s.substr(found+part.size(),s.size());
        s = left + right;

        // recursion
        removeSubstring(s,part);
    }
    else{
        // base case
        return ;
    }
}


 int main(){
     
    string s;
    cin>>s;
    string part = "abc";

    // removeSubstring(s,part);

    removeSubstring(s,part);


    cout<<s;



    return 0;
 }