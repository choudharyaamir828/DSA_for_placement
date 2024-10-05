// reverse LL
// add new
// reverse ans

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
void inseratTail(node* &head,node* &tail,int data){
    if(head == NULL){
        node* newnode = new node(data);
        head= newnode;
        tail = newnode;
    }
    else{
        //step-1
        node* newnode = new node(data);
        // step-2
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
node* Reverse(node* head){
    node* prev = NULL;
    node* curr = head;
    node* forward = NULL;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
    
}
node* solve(node* &head1,node* &head2){

    if(head1 == NULL){
        return head1;
    }
    if(head2 == NULL){
        return head2;
    }


    // reverse both linkedlist 

    head1 = Reverse(head1);
    head2 =  Reverse(head2);


    // add both linkedList
    node* anshead = NULL;
    node* anstail = NULL;
    int carry = 0;
    while(head1 != NULL && head2 != NULL){
        int sum = carry + head1->data + head2->data;
        int digit = sum%10;  // digit nikal leya 
        carry= sum/10;   // carry nikal leya

        node* newnode = new node(digit);
        if(anshead == NULL){
            // first node insert kar re ho
            anshead = newnode;
            anstail = newnode;


        }
        else{
            anstail->next = newnode;
            anstail = newnode;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    while(head1 != NULL){
        int sum  = carry + head1->data;
        int digit = sum % 10;
        carry = sum/10;
        node* newnode = new node(digit);
        anstail ->next = newnode;
        anstail = newnode;
        head1 = head1->next;
    }

     while(head2 != NULL){
        int sum  = carry + head2->data;
        int digit = sum % 10;
        carry = sum / 10;
        node* newnode = new node(digit);
        anstail ->next = newnode;
        anstail = newnode;
        head2 = head2->next;
    }

    // handle carry ko alag se
    while (carry != 0){
        int sum  = carry;
        int digit = sum % 10;
        carry = sum / 10;
        node* newnode = new node(digit);
        anstail -> next = newnode;
        anstail = newnode;

    }
    anshead = Reverse(anshead);
    

    return anshead;

}


int main(){
    // linkedList first
    node* head1 = NULL;
    node* tail1 = NULL;
    inseratTail(head1,tail1,2);
    inseratTail(head1,tail1,4);

    // linkedList second
    node* head2 = NULL;
    node* tail2 = NULL;
    inseratTail(head2,tail2,2);
    inseratTail(head2,tail2,3);
    inseratTail(head2,tail2,4);
    

    


    node* ans = solve(head1,head2);

    print(ans);

    return 0;
}