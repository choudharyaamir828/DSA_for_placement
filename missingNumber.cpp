#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
class solution{
    public:

    int MissingNumber(vector<int>arr,int n){

        int ans =1;
        sort(arr.begin(),arr.end());
        for(int i =0;i<n;i++){
            if(arr[i] == ans){
                ans = ans+1;

            }
            else{
                return ans;
            }
        }
    }

};


int main(){

    solution obj;
    vector<int> arr= {1,2,3,4,5,6,8,9};
    int n = 9;

    cout<< "the mising number is :"<<obj.MissingNumber(arr,n);
    cout<< "the mising number is :"<<obj.MissingNumber(arr,n);



}