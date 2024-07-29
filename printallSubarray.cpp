#include<iostream>
#include<vector>
using namespace std;
void printallsubarray_utl(vector<int>nums,int start,int end ){

    if(end > nums.size() ){
        return;
    }
    for(int i =start;i<end;i++){
        cout<<nums[i];
    }
    cout<<endl;
    printallsubarray_utl(nums,start,end+1);
   
}
 void printallsubarray(vector<int>nums){
    
    for(int start = 0;start<nums.size();start++){
       int end = start;
        printallsubarray_utl(nums,end,start+1);

    }
    
    
}


int main(){
    vector<int>nums = {1,2,3,4};
    printallsubarray(nums);
    cout<<endl;


    return 0;
}