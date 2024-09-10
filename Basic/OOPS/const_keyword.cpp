#include<iostream>
using namespace std;
class abc{
    int x;
    int *y;
    int z;

    public:
    abc(){ 
        x = 0;
        y = new int(0);
    }
    // first way to write constructor
    // abc(int a,int b, int z = 0){
    //     x = a;
    //     y = new int(b);
    //     this->z = z; 

    // }
    // second way to write constructor(initialization list)
    abc(int _x,int _y,int _z = 0): x(_x),y(new int(_y)),z(_z) // we can intizalize a const variable using this list 
    {
      //  optional
      cout<<"in init list"<<endl;
      
    }

    int getx() const{
        return x;
    }
    void setx(int _val){
        x = _val;
    }
    int gety() const{
        return *y;
    }
    void sety(int  _val){
        *y = _val;

    }
    int getz() const{
        return z;
    }
    void setz(int _val){
        z = _val;
    }
};
void printABC(const abc &a){
    cout<< a.getx()<<" "<< a.gety()<<" "<< a.getz()<<endl;
}
int main(){

    abc a(1,2,10);
    printABC(a);











    // case-3 constant data and constant pointer
    // const int *const a  = new int(15);
    // cout<<*a <<endl;

    // *a = 17; // nai chalega
    // int c = 30;
    // a = &c;  // nai chalega






//case-2 const pointer but non const data
// int *const a = new int(3);
// cout<< *a<<endl;

//  *a = 40;  // chal jayga 
//  cout<<*a <<endl; 

// int b = 5;
// a = &b;  // not work because of constant pointer
// cout<<a<<endl;





//   case-1 . const with pointer

//     // const int* a = new int(10); // const data non-const pointer
//     int const* a = new int(10); // same as uper line
//     cout<<*a <<endl;
   
//   // *a = 40; // cant change
//   int b = 30;
//   a = &b;
//   cout<<*a <<endl;



//    const int a = 20;
//     cout<<a<<endl;
//     a = 30;  // can not be change
//     cout<<a <<endl;

    return 0 ;
}