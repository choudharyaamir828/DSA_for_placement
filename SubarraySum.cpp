#include<iostream>
using namespace std;

//  Brute Force Approach  O(n*3)

// int arraySum(int arr[],int n){
//     int maxi = INT_MIN;
//     for(int i=0;i<n;i++){
//         for(int j = i;j<n;j++){
//             int sum =0;
//             for(int k = i;k<=j;k++){
//                 sum += arr[k];
//                 maxi = max(sum,maxi);
//             }
//         }
//     }

//     return maxi;

// }

//  Better Approach o(n*2)

// int arraySum(int arr[],int n){
//     int maxi = INT_MIN;
//     for(int i=0;i<n;i++){
//         int sum =0;
//         for(int j = i;j<n;j++){
            
//             sum += arr[j];
//             maxi = max(sum,maxi);
//         }
//     }

//     return maxi;

// }

// optimal solution

int arraySum(int arr[],int n){
    int maxi = LONG_MIN;
    long long sum = 0;
    for(int i=0 ;i<n; i++){
        
        sum += arr[i];

        if(sum > maxi){
            maxi = sum;
        }

        if(sum < 0){
            sum = 0;
        }
    }

    return maxi;
}



int main(){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};

    cout<<"the maximum sum is : "<<arraySum(arr,9)<<endl;

    return 0;
}