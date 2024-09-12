#include<iostream>
#include<string>
using namespace std;


class mobile{
    string name;
    int price;

    public:
    mobile(string _Name,int _price):name(_Name),price(_price){};

    string getname(){
        return name;
    }
    int getprice(){
        return price;
    }
};

class B{
    public:
    void print(const mobile &a){
        
    }
};




int main(){


    return 0;
}