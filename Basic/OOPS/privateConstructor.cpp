//can construcotr make private:- YES

#include<iostream>
using namespace std;
class A{

    A(){
        cout<<"i am A class constructor"<<endl;
    }
    friend class B;
};
class B{
    public:
   B(){
     A a1;
    cout << "constructor of B"<<endl;
   }

};

int main(){

    B b1;
    B b3;
    return 0;
    



    return 0;
}