#include<iostream>
#include<algorithm>
#include <stdio.h>
using namespace std;
void lefttoright(string& s,char ch , int i,int &ans ){
    
    if(i >= s.size()-1){
        return ;
    }
    // ek case 
    if(s[i] == ch) {
        ans = i; 
    }
    lefttoright(s,ch,i+ 1,ans);
}
void righttoleft(string& s,char ch,int i ,int &ans){
    if(i <0){
        return;
    }

    if(s[i] == ch){
        ans = i;
        return;

    }
    righttoleft(s,ch,i-1,ans);
}


int main(){
    string s = {"frfdgbabbbbbdc"};
    char ch = 'a';
    int i = 0;
    int ans = -1;
    lefttoright(s,ch,i,ans);

    // righttoleft(s,ch,s.size()-1, ans);
   

    cout<<"the last occurence of ch is :"<<ans;


    return 0;
}