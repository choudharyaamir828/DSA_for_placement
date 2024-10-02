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

void RemoveDuplicate(node* head) {
    node* temp1 = head;

    while (temp1 != NULL) {
        node* temp2 = temp1;
        
        // Check for duplicates ahead
        while (temp2->next != NULL) {
            if (temp1->data == temp2->next->data) {
                // Found a duplicate
                node* duplicateNode = temp2->next;
                temp2->next = temp2->next->next; // Remove duplicate
                delete duplicateNode; // Free memory for the duplicate
            } else {
                temp2 = temp2->next; // Move to the next node
            }
        }
        temp1 = temp1->next; // Move to the next unique node
    }
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
    cout<<endl;
    RemoveDuplicate(head);
    print(head);


    return 0;
}