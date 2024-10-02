#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this-> data = data;
        this->next = NULL;
    }

};

node* insertAttail(node* &head,node* &tail,int data){

    if(head == NULL){

        node* newnode = new node(data);
        head = newnode;
        tail = newnode;
        return head;

    }
    node* newnode = new node(data);
    tail->next = newnode;
    tail = newnode;

}
void print(node* head){
    node* temp  = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
node* findmiddle(node* head){
    if(head == NULL){
        cout << "linked list is empty" << endl;
        return head;
    }
    node* slow = head;
    node* fast = head->next;
    while(fast != NULL && slow != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}
node* reverse(node* head){
    node* curr = head;
    node* prev = NULL;
    
    while(curr != NULL){
        node* temp = curr->next;
        curr->next  = prev;
        prev= curr;
        curr = temp;

    }
    return prev;

}
bool checkPalindrome(node* &head){
    if(head == NULL){
        cout<<"ll is empty "<<endl;
        return true;
    }

    if(head->next == NULL){
        return true;
    }

    node* middle = findmiddle(head);

   node* reverseLLkahead = reverse(middle->next); 

   

   node* temp1 = head;
   node* temp2 = reverseLLkahead;
   while(temp2 != NULL){
    if(temp1->data != temp2->data){
        return false;
    }
    else{
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
   }


   return true; 


}

int main(){
    
    node* head = NULL;
    node* tail = NULL;
    insertAttail(head,tail,10);
    insertAttail(head,tail,20);
    insertAttail(head,tail,30);
    insertAttail(head,tail,40);
    insertAttail(head,tail,40);
    insertAttail(head,tail,30);
    insertAttail(head,tail,20);
    insertAttail(head,tail,10);

    
    print(head);
    cout<<endl;
   
   bool ispalindrome = checkPalindrome(head);
   if(ispalindrome){
    cout<<"LL is a valid palindrome"<<endl;
   }
   else{
    cout<<"LL is not a palindrome"<<endl;
   }
   




    return 0;
}