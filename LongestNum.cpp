#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
static bool mycomp(string s1,string s2){
    string t1 = s1 + s2;
    string t2 = s2 + s1;
   return t1 > t2;
     
}
string LongestNum(vector<int>nums){
    vector<string>snums;
    for(auto n:nums){
        snums.push_back(to_string(n));
    }
    sort(snums.begin(),snums.end(),mycomp);
    string ans = "";
    for(auto str:snums){
        ans +=str;
    }

    return ans;
}

int main(){

    vector<int> arr={3,30,34,5,9};

    cout<<"the longest string: "<<LongestNum(arr)<<endl;


    return 0;
}