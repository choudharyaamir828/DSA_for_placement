#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int StringCompression(vector<char> &s){
    int index = 0, count = 1;
    char prev = s[0];
    if(s.empty()) return 0;

    for(int i=1;i<s.size();i++){
        if(s[i] == prev){
            count++;
        }
        else{
            s[index++] = prev;
            if(count >1){
                int start = index;
                
                string count_str = to_string(count); // Convert count to string
                for (char c : count_str) {
                    s[index++] = c;
                }
            }
            prev =s[i];
            count = 1;
        }
    }
    s[index++] = prev;
    if(count > 1){
        string count_str = to_string(count); // Convert count to string
        for (char c : count_str) {
            s[index++] = c;
        }
    }
    return index;

}
int main(){
    vector<char>ch={'a','a','b','b','c','c','c'};

    cout<<"the reverse string is : "<< StringCompression(ch);




    return 0;
}