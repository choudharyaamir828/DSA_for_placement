#include<iostream>
using namespace std;


int pascalNumber(int n,int r){
    int res = 1;

    for(int i =0; i<r ;i++){
        res = res * (n-i);
        res = res/(i+1);
    }

    return res;
}

void pascal(int row){
    for(int i =0;i<row;i++){
        int val = 1;
        for(int j =1;j<(row-i);j++){
            cout<<" ";
        }
        for(int k = 0;k<=i;k++){
            cout<<"  "<<val;
            val = val*(i-k)/(k+1);
        }
        cout<<endl;
    }
    
}


int main(){

int row = 5;
pascal(row);



//   int row = 10;
//   int col = 5;
//   cout<<"the element is :"<< pascalNumber(row,col)<<endl;

return 0;

  
}