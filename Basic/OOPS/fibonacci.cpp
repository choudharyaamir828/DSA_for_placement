#include<iostream>
using namespace std;

 int fibo(int n){
    if(n == 1 || n==0){
        return n;
    }

    return fibo(n-1) + fibo(n-2);
 }



int main(){
    int arr[] = {2,3,4,5,6};
    int n = 4;
    int num = 9;


    for(int i =0;i<7;i++){
        cout<<fibo(i)<<" ";
    }
    


    return 0;

}