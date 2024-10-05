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

void RemoveDuplicate(node* &head) {
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

void Arange_0s_1s_2s(node* head){
    node* temp= head;
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    while(temp != NULL){
        if(temp->data == 0){
            count0++;
        }
        if(temp->data == 1){
            count1++;
        }
        if(temp->data == 2){
            count2++;
        }
        temp = temp->next;
    }
  temp = head;
    
        // fill zeros
        while(count0--){
            temp->data = 0;
            temp = temp->next;
        }
        while(count1--){
            temp->data = 1;
            temp = temp->next;
        }
        while(count2--){
            temp->data = 2;
            temp = temp->next;
        }
}

node* sort2(node* &head){

    if(head == NULL){
        cout<<"LL is empty "<<endl;
        return head;
    }
    if(head ->next = NULL){
        return head;
    }

  // create dummy nodes
  node* zerohead = new node(-101);
  node* zerotail = zerohead;

  node* onehead = new node(-101);
  node* onetail = onehead;

  node* twohead = new node(-101);
  node* twotail = twohead;

  // traverse the original Linkedlist

  node* curr = head;
  while(curr != NULL){
    if(curr->data == 0){
      // take out the zero wali node
      node* temp = curr;
      curr = curr->next;
      temp->next = NULL;
      // append the zero node in zerohead LL
      zerotail->next = temp;
      zerotail = temp;
     
    }
    else if (curr->data ==1){
       // take out the zero wali node
      node* temp = curr;
      curr = curr->next;
      temp->next = NULL;
      // append the zero node in zerohead LL
      onetail->next = temp;
      onetail = temp;

    }
    else if(curr->data == 2){
       // take out the zero wali node
      node* temp = curr;
      curr = curr->next;
      temp->next = NULL;
      // append the zero node in zerohead LL
      twotail->next = temp;
      twotail = temp;

    }
  }


  // abb yha pr , zero , one , two , teeno LL ready hai



  // modify one walie list 
  node* temp = onehead;
  onehead = onehead->next;
  temp->next = NULL;
  delete temp;

  // modify two wali list
  temp = twohead;
  twohead = twohead->next;
  temp->next = NULL;
  delete temp;

// join list

if(onehead != NULL){
  // one wali list is non empty
  zerotail->next = onehead;
  if(twohead != NULL)
    onetail->next = twohead;

}
else{
  // one wali list is empty
  if(twohead != NULL)
    zerotail->next = twohead;
  
}

// remove zerohead dummy node
temp = zerohead;
zerohead = zerohead->next;
temp->next = NULL;
delete temp;

// return head of the modified linked list
return zerohead;

}
 


int main(){
    node* head = NULL;
    node* tail = NULL;
    insertAtTail(head,tail,2);
    insertAtTail(head,tail,2);
    insertAtTail(head,tail,0);
    insertAtTail(head,tail,2);
    insertAtTail(head,tail,1);
    insertAtTail(head,tail,2);
    insertAtTail(head,tail,1);
   //  print(head);
   // cout<<endl;
   // RemoveDuplicate(head);
//    Arange_0s_1s_2s(head);
    print(head);
    cout<<endl;


 head =  sort2(head);
    print(head);


    return 0;
}