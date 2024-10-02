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
void insertattail(node* &head,node* &tail,int data){
    if(head == NULL){
        node* newnode = new node(data);
        head = newnode;
        tail = newnode;
        return;
    }

    node* newnode = new node(data);
    tail->next = newnode;
    tail = newnode;
}
void print(node* &head){
    node* temp  = head;
    while(temp != NULL){
        cout<<temp->data <<" ";
        temp = temp->next;
    }
}

void RemoveDublicate(node* &head){
    node* curr = head;

    if(curr == NULL){
        return;
    }
    if(curr->next == NULL){
        return;
    }
    while(curr != NULL){


        if((curr->next != NULL) && (curr->data == curr->next->data)){
            node* temp = curr->next;
            curr->next = curr->next->next;
            // delete node
            temp->next = NULL;
            delete temp;
        }
        else{
              // not eual
            curr  = curr->next;
        }
    }
}


int main(){
    node* head = NULL;
    node* tail = NULL;
    insertattail(head,tail,1);
    insertattail(head,tail,2);
    insertattail(head,tail,2);
    insertattail(head,tail,3);
    insertattail(head,tail,4);
    insertattail(head,tail,4);

    cout<<"before removing: ";
    print(head);
    cout<<endl;

    RemoveDublicate(head);
    cout<<"after removing: ";
    print(head);

    return 0;
}