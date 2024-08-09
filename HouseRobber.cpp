#include<iostream>
#include<vector>
using namespace std;

int RoberHelper(vector<int>&nums,int i ){

    if(i >= nums.size()){
        return 0;
    }
    
    int robAmount1 = nums[i] + RoberHelper(nums,i+2);
    int robAmount2 = 0 + RoberHelper(nums,i+1);

    return max(robAmount1,robAmount2);
}


int main(){

vector<int>arr = {1,2,3,1};

cout<<"the amximum amount is "<< RoberHelper(arr,0);


    return 0;
}