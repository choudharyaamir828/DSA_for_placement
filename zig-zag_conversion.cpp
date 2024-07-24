#include<iostream>
#include<string>
#include<vector>
using namespace std;
string convert(string s , int numRow){
    if(numRow ==1){
        return s;
    }
    vector<string>zigzag(numRow);
    int i =0,row = 0;
    int direction =1;
    while(true){
        if(direction){
            while(row < numRow && i < s.size()){
                zigzag[row++].push_back(s[i++]);
            }
            row = numRow-2;
        }
        else{
            while(row >=0 && i < s.size()){
                zigzag[row--].push_back(s[i++]);
            }
            row = 1;
        }
        if(i >= s.size()) break;
        direction  = !direction;

    }
    string ans = "";
    for(int i =0;i<zigzag.size();i++){
        ans += zigzag[i];
    }
 return ans;

}




int main(){

    string s = "abcdefg";
    cout<<"the ans is :"<<convert(s,7);



    return 0;
}