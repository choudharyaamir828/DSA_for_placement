#include<iostream>
#include<string>
using namespace std;

class Animal{

    int weight= 50;
    public:
    // state

   int age = 13;
   string name = "moti";

   // behaviour

   void sleep(){
     cout<<"sleeping ";
   }
   void eat(){
    cout<<"Eating";
   }

   int getweight(){
    return weight;
   }

   void setweight(int w){
     this->weight = w;
   }

   // constructior

   Animal(){
    this->weight = 0;
    this->name = "";
    this->age = 0;
    cout<<"default constructior called "<<endl;
   }
   Animal(int age){

    this->age = age;
    cout<<"the age is "<<this->age<<endl;
   }
   Animal(int age,string name){
    this->age  = age;
    this->name = name;
    cout<<"the age is: "<<this->age<<endl;
    cout<<"the name is : "<<this->name<<endl;
   }
   Animal(int age,string name,int weight){
    this->age  = age;
    this->name = name;
    this->weight = weight;
    cout<<"the age is: "<<this->age<<endl;
    cout<<"the name is : "<<this->name<<endl;
    cout<<"the weight is: "<<this->weight<<endl;
   }

    Animal(Animal &obj){
    this->age  = age;
    this->name = name;
    this->weight = weight;
    cout<<"obj constructor called "<<endl;
    }

    void pirnt(){
        cout<<"the is is "<<this->age<<endl;
        cout<<"the name is "<<this->name <<endl;
    }

    ~Animal(){
        cout<<"i am inside destructor"<<endl;
    }

     


};


int main(){

     Animal a;
     a.age = 5;

    Animal* b = new Animal();
    b->age = 7;

    // manually called discructor for dynamic created obejects
    delete b;










    // Animal a;

    // a.age = 22;
    // a.name = "aamir";


    // Animal b = a;
    

    // a.pirnt();
    // b.pirnt();

    // a.name[0]= 's';
    // a.pirnt();
    // b.pirnt();


    // static allocation
    // Animal dog(12,"pusy",50);

    // dynamic allocation
    // Animal* cat = new Animal(9);



    // copy constructor
    //  Animal deer(dog);
    // or
    //  Animal deer = dog;

    // deer.age = 16;
    // deer.name = "hiran";

    // cout<<"the age of deer is :"<< deer.age<<endl;
    // cout<<"the name of the deer is :"<<deer.name<<endl;



    // dog.age = 14;
    // dog.name = "lucky";

    // cat->age = 10;
    // cat->name = "pusy";
    // or
    // (*cat).age = 5;
    // (*cat).name = "lucy";

    // cout<<"the age of cat is :"<<cat->age<<endl;
    // cout<<"the name of the cat is " << cat->name<<endl;




    // dog.setweight(30);
    // cout<<"the weight of the dog is :"<<dog.getweight()<<endl;


    // cout<<"the age of dog is :"<<dog.age<<endl;
    // cout<<"the name is :"<<dog.name<<endl;
   
    // cout<<"the weight of dog is :"<<dog.weight<<endl;

    // dog.eat();
    // dog.sleep();



    //  cout<<"the size of emty class :"<<sizeof(dog);






    return 0;
}