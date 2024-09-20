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

    // write distructor
    ~node(){
        cout<<"node with value:"<< this->data << "deleted";
    }
    
};

void print(node* &head){
    node *temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}

// i want to insert a node right at the head of linked list

void insertAthead(node* &head,node* &tail, int data){

    if(head == NULL){
        node* newnode = new node(data);
        head = newnode;
        tail = newnode;
        return;
    }

    // step-1
    node* newnode = new node(data);


    // step-2
    newnode ->next = head ;
 
    //step-3

    head = newnode;

}

void insertAttail(node* &head, node* &tail,int data){

     if(head == NULL){
        node* newnode = new node(data);
        head = newnode;
        tail = newnode;
        return;
    }

    // step-1
    node* newnode = new node(data);

     // step-2
     tail->next = newnode;
   
    // step-3
    tail= newnode;
}

int findlength(node* &head){
    int len =0;
    node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

// insert at position 

void insertAtposition(int position,node* &head,node* &tail,int data){

    //if position 0
    if(position == 0){
        insertAthead(head,tail,data);
        return;
    }

    // if positon is end;
    int len = findlength(head);

    if(position >= len){
        insertAttail(head,tail,data);
        return;
    }

    // at pos
    int i = 1;
    node* prev = head;
    while(i < position){
        prev = prev->next;
        i++;
    }
    node* curr = prev->next;

    // inserting
    node* newnode = new node(data);
    newnode->next = curr;
    prev->next = newnode;
}

// delete node from starting  

void deletenode(int position, node* &head,node* &tail){

    if(head == NULL){
        cout<<"cannot delete, it is empty"<<endl;
        return;
    }
    if(position == 1){
        node* temp = head;
        head = head->next;
        temp->next= NULL;
        delete temp;
        return;

    }
    int len = findlength(head);
    if(position == len){ 
    node* prev = head;
    int i = 1;
    while (i< position-1){
        prev= prev-1;
        i++;
    }
    
    prev->next = NULL;

    node* temp = tail;
    tail = prev;
    delete temp;
    return;

    }
}



int main(){
   
    
    // node* first = new node(3);
    // node* second = new node(4);
    // node* third = new node(5);
    // node* forth = new node(6);
    // node* fifth = new node(7);
    // node* sixth = new node(8);
    // node* seven = new node(9);

    
    // first->next = second;
    // second->next = third;
    // third->next = forth;
    // forth->next = fifth;
    // fifth->next = sixth;
    // sixth->next = seven;

    node* head = NULL;
    node* tail = NULL;

    insertAthead(head,tail,12);
    insertAthead(head,tail,16);
    insertAthead(head,tail,60);
  

    insertAttail(head,tail,34);
    insertAttail(head,tail,32);
      
    // cout<<"printing element: ";
    // print(head);

    insertAtposition(5,head,tail,101);




    cout<<endl<<"printing element: ";
    print(head);

    

    return 0;
}