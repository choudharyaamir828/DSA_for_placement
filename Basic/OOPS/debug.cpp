#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* next;
};

Node* head;

void insert(int x) {
  Node* temp = new Node;
  temp->data = x;
  
  head = temp;
  head = head->next;
}

void print() {
  Node* temp = head;
  cout << "List: ";
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main() {
  head = NULL;
  insert(1);
  insert(2);
  insert(3);
  print();
  return 0;
}