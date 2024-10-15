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
        return ;
    }
    else{
        
    node* newnode = new node(data);
     
     tail->next = newnode;
     tail = newnode;
    }
}
void print(node* &head){
   
    node* temp = head;
    while(temp != NULL){
        
        cout<<temp->data <<" ";
        temp = temp->next;

    }
}
int findlength(node* head){
    int len = 0;
    node* temp = head;
    while(temp != NULL){
        len +=1;
        temp = temp->next;
    }
    return len;
}
node* rotateList(node* head,int k){
    // Return NULL if the list is empty
    if(!head) return 0;

    int len = findlength(head);

    // Actual rotations needed
    int actualRotate = (k % len);
    if(actualRotate == 0) return head;

    // Find the new last node position
    int newLastnodepos = len - actualRotate-1; 
    node* newlastnode = head;

     // Traverse to the new last node
    for(int i =0;i<newLastnodepos;i++){
        newlastnode = newlastnode->next;

    }
     // Find the end of the new rotated list
     node* newhead = newlastnode->next;
     newlastnode->next = 0;

    // Find the end of the new rotated list
     node* it = newhead;
     while(it->next ){
        it = it->next;
     }
     it->next = head;  // Connect the end to the old head

     return newhead;  // Return the new head of the rotated list
}


int main(){
    node* head = NULL;
    node* tail = NULL;
    insertAttail(head,tail,1);
    insertAttail(head,tail,2);
    insertAttail(head,tail,3);
    insertAttail(head,tail,4);
    insertAttail(head,tail,5);
    insertAttail(head,tail,6);

    print(head);
    int k = 2;

    rotateList(head,k);

    cout<<endl;
    print(head);
}