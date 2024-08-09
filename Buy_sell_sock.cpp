#include<iostream>
#include<vector>
using namespace std;
void  BuySell_stock(vector<int>&arr,int &max_profit,int &min_price){

    

    for(int i =0;i<=arr.size();i++){

        if(arr[i] < min_price){
            min_price = arr[i];
        }
        int todayprofit = arr[i] - min_price;
        if(todayprofit > max_profit ){
            max_profit = todayprofit;
        }

    }
}


// void  BuySell_stock(vector<int>&arr,int i,int &max_profit,int &min_price){

//     if(i == arr.size()){
//         return ;
//     }

//     // ek case
//     if(arr[i] < min_price){
//         min_price = arr[i];
//     }
//     int todayprofit = arr[i] - min_price;
//     if(todayprofit > max_profit ){
//         max_profit = todayprofit;
//     }

//     // recursion call 
//     BuySell_stock(arr,i+1,max_profit,min_price);
// }

int main(){

vector<int>arr = {7,1,5,6,4};
int max_profit = INT_MIN;
 int min_price = INT_MAX;


//  BuySell_stock(arr,0,max_profit,min_price);(using recursion)

// itrativly 
BuySell_stock(arr,max_profit,min_price);
cout<< "maximum profit is : " <<max_profit;


    return 0;
}