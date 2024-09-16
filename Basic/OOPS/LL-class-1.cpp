#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node *next;

     node(){
        this->data = 0;
        this->next = NULL;

    }
    node(int data){
        this->data = data;
        this->next =  NULL;
    }

};
void print(node* &head){
node* temp = head;
while(temp != NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
}

}

int main(){
   

    node* first = new node(3);
    node* second = new node(4);
    node* third = new node(5);
    node* forth = new node(6);
    node* fifth = new node(7);
    node* sixth = new node(8);
    node* seven = new node(9);

    print(first);
   
    


    return 0;
}