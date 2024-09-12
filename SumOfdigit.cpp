#include<iostream>
using namespace std;
 
// using resursion

int sumofdigit(int num){
    int r;
    int ans = 0;

    // base case
    if(num <= 0){
        return 0;
    }

    return num%10 + sumofdigit(num/10);
}


// using loop
int sumofdigit2(int n){
    int ans = 0;
    int r;
    while(n != 0){
        r = n % 10;

        ans = ans + r;
        n = n/10;
    }

    return ans;
}

int octalTodecimal(int n ){
    int ans = 0;
    int base = 1;
    int r;
    while(n != 0){
        r = n%10;
        ans = ans + r*base;

        n= n/10;
        base = base*8;
    }

    return ans;
}

int main(){
  int  n = 54329;

   octalTodecimal(n);
   cout<< "the sum is :"<< sumofdigit2(n);


    return 0;

}
