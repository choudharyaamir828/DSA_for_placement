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
int pascalrow(int n,int r){
    int val = 1;
    for(int i = 0;i<r;i++){
        
        val = val*(n-i)/(i+1);
        
    }
    return val;
}
void pascalTrangle(int n){
    for(int c =0;c<=n;c++){
        cout<<pascalrow(n,c)<<" ";
    }
}



int main(){

    int n = 5;
    pascalTrangle(n);

// int row = 5;
// pascal(row);



//   int row = 10;
//   int col = 5;
//   cout<<"the element is :"<< pascalNumber(row,col)<<endl;

return 0;

  
}