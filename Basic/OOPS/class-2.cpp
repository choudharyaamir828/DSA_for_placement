#include<iostream>
#include<string>
using namespace std;

// class animal{

//     private:

//     int age;
//     int weight;

//     public:

//         void eat(){
//             cout<<"Eating"<<endl;
//         }

//         int getage(){
//             return this->age;
//         }
//         void setage(int age){
//             this->age = age;
//         }
// };

// class car{
//     public:
//     string brand;

//     void print3(){
//         cout<<"inside car class "<<endl;
//     }
// };
// class scorpio:public car, public animal{
//     public:
//     void print4(){
//         cout<<"inside scorpio class"<<endl;
//     }
// };



// class dog:public animal{

//     public:

//     void print(){
//         cout<<"inside dog class";
//     }

// };
// class perrot:public animal{

// public:
//     void print2(){
//            cout<<"I am in perrot class"<<endl;

//     }
// };



// class cat:public dog{

//     public:
//     void print1(){
//         cout<<"inside cat class"<<endl;
//     }

// };

class calculator{
    public:
    int a;
    int b;
    int c;
    
    // method 
    int sum(int a,int b){
        this->a = a;
        this->b = b;
        return a+b;

    }
     int sum(int a,int b,int c){
        this->a = a;
        this->b = b;
        this->c = c;
        return a+b+c;

    }
    int sum (int a, int b,float c){
        this->a = a;
        this->b = b;
        this->c = c;
         return a+b+c;
        
    }
};

int main(){
    calculator math;

    // cout<<"this sum of two number is :"<<math.sum(3,4)<<endl;
     cout<<"this sum of three number is :"<<math.sum(3,4,5.15f)<<endl;












    // scorpio d1;
    //  d1.eat();

    // d1.print4();
    // d1.print3();



    // cat c1;
    // // c1.eat();
    // c1.print();
    

    return 0;
}