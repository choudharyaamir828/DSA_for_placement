#include<iostream>
#include<string>
using namespace std;


class mobile{
    private:
    
    int price;

    public:
    mobile(int _price):price(_price){};

    
    int getprice() const{
        return price;
    }
    void setprice(int val){price = val;}

    friend class B;
    friend void printnum(const mobile &a);
};

class B{
    public:
    void print(const mobile &a){
      //  cout<< a.getprice()<<endl;

      cout<<a.price<<endl;
    }
};

void printnum(const mobile &a){
    cout<<a.price<<endl;
}


int main(){
    mobile a(500);
    B b;
    b.print(a);

    printnum(a);


    return 0;
}