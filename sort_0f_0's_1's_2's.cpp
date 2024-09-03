#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>arr ={1,2,0,1,2,1,1,1,0,0,2};

    //sort(arr.begin(),arr.end());

    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    vector<int>arr2;
     for(int i = 0; i<arr.size();i++){
      if(arr[i] == 0){
        count0++;
      }
      else if(arr[i] == 1){
        count1++;

      }
      else{
        count2++;
      }
     }
    //replace 
     for(int i =0;i<count0;i++){
      arr[i] = 0;
     }
       for(int i =count0;i< count0+count1;i++){
      arr[i] = 1;
     }
     
       for(int i = count0+count1;i<arr.size();i++){
      arr[i] = 2;
     }

      for(int i =0;i<arr.size();i++){
         cout<< arr[i] <<" ";
     }
     
     




    return 0;
}
