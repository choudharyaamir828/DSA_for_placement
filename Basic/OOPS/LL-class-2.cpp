#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;

    }

    ~Node(){
        cout<<"deleted Node "<<this->data<<endl;
    }
};

void print(Node* &head){
    Node* temp =  head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}

int getlength(Node* &head){
    Node* temp = head;
    int len= 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    
    return len;
}

void insertAthead(Node* &head,Node* &tail,int data){

    if(head == NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
    }
    else{
        //step-1
        Node* newnode = new Node(data);
        //step-2
        newnode->next = head;
        //step-3
        head->prev = newnode;
        //step-4
        head = newnode;

    }
}

void insertAttail(Node* &head,Node*& tail,int data){

    if(head == NULL){
        Node* newnode = new Node(data);
        head= newnode;
        tail = newnode;

    }
    else{
        //step-1
        Node* newnode = new Node(data);
        // step-2
        tail->next = newnode;
        //step-3
        newnode->prev = tail;
        //step-4
        tail = newnode;
    }
}

void insertAtposition(Node* &head,Node*& tail,int data,int position  ){
    //in Null linkedlist
    if(head == NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    // insert at head
    if(position == 1){
        insertAthead(head,tail,data);
        return;
    }

    // insertAttail
    int len = getlength(head);
    if(position >= len){
        insertAttail(head,tail,data);
        return;
    }

    // At middle

    int i = 0;
    Node* temp = head;
    while (i < position){
        temp = temp->next;
        i++;
    }
    Node* prevNode = temp->prev;

    Node* newnode = new Node(data);

    // prevNode->next= newnode;
    // newnode->prev = prevNode;
    // temp->prev = newnode;
    // newnode->next = temp;


    // insert element at position using single pointer (Optionial)

    prevNode->next->prev = newnode;
    newnode->next = prevNode->next;
    prevNode->next = newnode;
    newnode->prev = prevNode;



}

// Delete Node

void deleteNode(Node* &head, Node* &tail,int position){

    if(head == NULL){
        cout<<"linked list is empty"<<endl;
        return;
    }
    if(head->next == NULL){
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    int len = getlength(head);
    if(position > len){
        cout<<"please enter a valid position "<<endl;
        return;
    }
    if(position == 1){
        Node* temp = head;
        head = head->next;
        head-> prev = NULL;
        delete temp; 
        return;
        
    }
    if(position == len){
        Node* temp = tail;
        tail = tail->prev;
        temp->prev = NULL;
        tail->next = NULL;
        delete temp;
    }

    Node* left = head;
    int i = 0;
    while(i < position-1){
        left = left->next;
        i++;
        
    }
    Node* curr = left->next;
    Node* right = curr->next;

    // step-2
    left->next = right;
    //step-3
    right->prev = left;

    //step-4
    curr->next = NULL;
    curr->prev = NULL;
    delete curr;

    
}



int main(){

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    Node* head = first;
    Node* tail = third;
  
    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    print(head);
    cout<<endl;


    insertAthead(head,tail,102);
    print(head);
    cout<<endl;


    insertAttail(head,tail,105);

    print(head);
    cout<<endl;

    insertAtposition(head,tail,124,2);
    print(head);
    cout<<endl;

    insertAtposition(head,tail,123,1);
    print(head);
    cout<<endl;

    insertAtposition(head,tail,123,7);
    print(head);
    cout<<endl;

     deleteNode(head,tail,1);
     print(head);

    return 0;
}