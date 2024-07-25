#include<iostream>
#include<vector>
using namespace std;
bool sumOftwo(vector<int>&arr){
    if(arr.size() >0){ 
   for(int i =0;i<arr.size();i++){
    for(int j =i+1;j<arr.size();j++){
        if(arr[i]+arr[j] == 0)
            return true;
        
        }
   }
   return false;
    }

}
int main(){
    vector<int>arr = {1,2,-6,4,5,6};
    

    cout<<"the ans is :"<< sumOftwo(arr);


    return 0;
}