
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int row = 5;
    int col = 3;

    

     int** arr = new int*[row];
     for(int i =0;i<row;i++){
         arr[i] = new int[col];

     }

    //  for(int i= 0;i<row;i++){
    //      for(int j = 0;j<col;j++){
    //          cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    //   }

    // De-allocate of 2-d array form heap
    //  for(int i =0;i<row;i++){
    //     delete []arr[i];
    // }

    delete []arr;




    // using vector create 2-d array
    // vector<vector<int>>arr(row,vector<int>(col,1));

     for(int i= 0;i<row;i++){
         for(int j = 0;j<col;j++){
             cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }

   
  
    return 0;
}