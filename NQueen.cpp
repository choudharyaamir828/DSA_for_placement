#include<iostream>
#include<vector>
using namespace std;
void printSolution(vector<vector<char>>&board,int n){
    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool issafe(vector<vector<char>>&board,int row,int col,int n){

    // 3 case ho sakte hai

    // case-1 (check kor present row mai koi queen hai  )

    int i = row;
    int j = col;
     while ( j >= 0){
        if(board[i][j] == 'Q'){
            return false;
        }
        j--;
     }
    
    // case-2 (upper left diagnol ckeck kro)

    i = row;
    j = col;

    while(i >= 0 && j >=0){
        if(board[i][j] == 'Q'){
           
            return false;
        }
        i--;
        j--;
    }

    //case-3 (ckeck lower diagnol )
    i = row;
    j = col;
    while( i < n && j >=0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i++;
        j--;

    }
     

     return true;
    

}
void solve(vector<vector<char>>&board,int col,int n){

    // base case
    if(col >=n){
         printSolution(board,n);
         cout<<endl;
    }

    // ek case solve kar do baki recursion krega

    for(int row =0;row <n;row++){
        if(issafe(board,row,col,n)){
            board[row][col] = 'Q';

            //recursion solution krega

            solve(board,col+1,n);

            //backtracking

            board[row][col] = '-';

           
        }
    }


}


int main(){

    int n =4;

vector<vector<char>>board(n,vector<char>(n,'-'));


int col = 0;

solve(board,col,n);



    return 0;

}