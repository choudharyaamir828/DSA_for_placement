#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertAtTail(node* &head,node* &tail,int data){
    if(head == NULL){
        node* newnode = new node(data);
        head = newnode;
        tail = newnode;
        
        return;
    }
    else{

    node* newnode = new node(data);
    tail->next = newnode;
    tail  = newnode;
    }
}


void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data <<" ";
        temp = temp->next;
    }
}
void RemoveDublicate(node* head){

  

}
int main(){
    node* head = NULL;
    node* tail = NULL;
    insertAtTail(head,tail,1);
    insertAtTail(head,tail,2);
    insertAtTail(head,tail,2);
    insertAtTail(head,tail,3);
    insertAtTail(head,tail,4);
    insertAtTail(head,tail,3);
    insertAtTail(head,tail,2);
    print(head);


    return 0;
}