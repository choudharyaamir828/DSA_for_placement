#include<iostream>
using namespace std;

inline void numbershow(int num){
    cout<<"the num is :"<<num<<endl;
}

int main(){

    numbershow(10);
    numbershow(10);
    numbershow(10);
    numbershow(10);


    // inline do like this instead [  numbershow(10) -> cout<<"the num is :"<<num<<endl;]


    return 0;

}