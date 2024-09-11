#include <iostream>
using namespace std;

class Node {
  public:
      int data;
      Node* next;
      // constructor without parameters
      Node() {
        this->data = 0;
        this->next = NULL;
      } 
      // constructor with parameters
      Node(int data) {
        this->data = data;
        this->next = NULL;

      }
  
};
void print(Node* &head) {
  // void print(Node* head) or void print(Node* &head) 
  // we can pass by address or no need because we are simply printing but not changing any value
  Node* temp = head;
  while(temp!=NULL){
    cout<<temp->data<< " ";
    temp = temp->next;
  }
}

int main() {
  Node* head = new Node(10);
  Node* tail = new Node(20);
  head->next = tail;
  print(head);

}
