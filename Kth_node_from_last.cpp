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
int find(node* head,int position){
    int len = 0;
    int ans = 0;
    node* temp = head;
    while(temp != NULL){
        len +=1;
        temp = temp->next;
    }
    position =  len - position;
    if (position < 0 || position >= len) {
        return -1; // Return an error code if position is invalid
    }
    temp = head;
    for(int i =0;i<position;i++){
        temp = temp->next;
    }

    return temp->data;
    
}


int main(){
    node* head = NULL;
    node* tail = NULL;
    insertAttail(head,tail,10);
    insertAttail(head,tail,20);
    insertAttail(head,tail,30);
    insertAttail(head,tail,40);
    insertAttail(head,tail,50);
    print(head);
    cout<<endl;

   
    int pos = 1;
  int ans =   find(head,pos);
  cout<<"the ans is :"<<ans;
    

}