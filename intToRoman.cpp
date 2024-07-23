#include<iostream>
using namespace std;
 string intToRoman(int num) {
        string symbols[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int values[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string ans = "";
        if(num > 0){ 
        for(int i=0;i<13;i++){
            while(num >= values[i]){
                ans += symbols[i];
                num -=values[i];
            }
        }
        }
        
        return ans;
    }


int main(){
    int num;
    cout<<"enter number: ";
    cin>>num;
    cout<<intToRoman(num);
}