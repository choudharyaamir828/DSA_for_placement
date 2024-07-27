#include<iostream>
using namespace std;
void ReverseString(string& s, int i , int j ){
   
    if(i > j){
        return;
    }
    swap(s[i],s[j]);

    ReverseString(s,i+1,j-1);
}
int main(){
    string s = "abcd";
    int i=0;
    int j = s.size()-1;
    
    ReverseString(s,i,j);
    cout<<"reverse ho gya: " << s <<endl;

   

    return 0;
}