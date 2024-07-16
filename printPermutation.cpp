#include <iostream>
#include<string>
using namespace std;
void printpermutation(string &s,int i ){
  if( i >= s.length()){
    cout<<s <<" ";
  }

  for(int j = i; j<s.length();j++){
    swap(s[i],s[j]);
    printpermutation(s,i+1);

    //backtracking

     swap(s[i],s[j]);
  }
}

int main() {
 string s = "abc";
 int  j =0;
printpermutation(s,j);
  return 0;
}