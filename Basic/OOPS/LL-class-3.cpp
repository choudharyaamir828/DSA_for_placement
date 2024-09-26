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
void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp =temp->next;
    }
    cout<<endl;
}
node* getMiddleNode(node* head){

    if(head == NULL){
        cout << "linked list is empty" << endl;
        return head;
    }

    
    node* slow = head;
    node* fast = head->next;
    //      or
    // node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL ){
            fast = fast->next;
            slow = slow->next;
        }
    }

    return slow;
    
}

int main(){

    node* head = new node(10);
    node* second = new node(20);
    node* third = new node(30);
    node* forth = new node(40);
    node* fifth = new node(50);
    node* sixth = new node(60);
    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    print(head);
    cout<<"Middle node is : "<< getMiddleNode(head)->data<<endl;

    return 0;
}