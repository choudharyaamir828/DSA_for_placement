#include<iostream>
#include<string>
using namespace std;

int myatoi(string s){
    int i =0;
    int num = 0;
    int sign = 1;
    while(s[i] == ' '){
        i++;
    }
    if(i < s.size() && s[i] == '+' || s[i] == '-'){
        // sign = s[i]=='+'?1:-1;

        if(s[i] == '+'){
            sign = 1;
        }
        else{
            sign = -1;
        }
        ++i;
    }
    while(i < s.size() &&  isdigit(s[i])){
        if(num > INT_MAX / 10){
            return sign == -1?INT_MIN:INT_MAX;
        }
        num = num * 10 + (s[i] - '0');
        ++i;
    }
    return num * sign;

}

int main(){

    string s = "   -123hello";

    cout<<"the converted string is : "<< myatoi(s);


    return 0;
}