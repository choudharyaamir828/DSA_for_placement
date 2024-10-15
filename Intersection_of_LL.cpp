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
void insertAttail(node* &head,node* &tail,int data){
    if(head == NULL){
        node* newnode = new node(data);
        head = newnode;
        tail = newnode;
    }
    node* newnode = new node(data);
    tail->next = newnode;
    tail = newnode;
}

void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    node* head1 = NULL;
    node* tail1 = NULL;

    node* head2 = NULL;
    node* tail2 = NULL;

    insertAttail(head1,tail1,1);
    insertAttail(head1,tail1,2);
    insertAttail(head1,tail1,3);
    insertAttail(head1,tail1,4);
    insertAttail(head1,tail1,5);

    insertAttail(head2,tail2,1);
    insertAttail(head2,tail2,2);
    insertAttail(head2,tail2,3);

    node* a = head1;
    node* b= head2;
    while(a->next && b->next){
        if(a==b)
        return a;

        a= a->next;
        b= b->next;
        
    }




    return 0;
}