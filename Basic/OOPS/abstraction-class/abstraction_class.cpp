#include<iostream>
#include "bird.h"
using namespace std;

void birddoesSomething(Bird *&bird)
{
    bird->eat();
    bird->fly();
    bird->eat();
    bird->eat();
    bird->fly();
    bird->eat();
    

}

int main(){
// Bird *bird = new sparrow();
// Bird *bird = new Eagle();
 Bird *bird = new pigeon();



birddoesSomething(bird);
 return 0;


}