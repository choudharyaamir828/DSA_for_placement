#include<iostream>
// #include<stack>
using namespace std;
class stack{
    private:
    int *arr;
    int top;
    int size;

    public:

    stack(int size){
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    //function

    void push(int data){
        if(size-top > 1){
            top++;
            arr[top]  = data;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    void pop(){
        if(top == -1){
            cout<<"underflow"<<endl;
        }
        else{
            top = top-1;
        }
         
    }

    int getTop(){

        if(top == -1){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }
    int getsize(){
        return top+1;
    }
    bool isempty(){
        if(top == -1){
            return true;
        }
        return false;
    }



};


int main(){
    // stack<int>s;
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);
    // s.push(60);
    // cout<<s.top()<<endl;

    // stack<string>s;

    // s.push("a");
    // s.push("a");
    // s.push("m");
    // s.push("i");
    // s.push("r");

    stack s(4);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    

    cout<<s.getsize()<<endl;


    while(! s.isempty()){
        cout<< s.getTop() <<" ";
        s.pop();
    }
    // s.pop();


    return 0;
}