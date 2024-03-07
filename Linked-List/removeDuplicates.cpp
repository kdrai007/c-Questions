#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node(int x) {
    this->data = x;
    this->next = nullptr;
  }
};

void insertNode(Node *&head, int val) {
  Node *newNode = new Node(val);
  if (head == nullptr) {
    head = newNode;
    return;
  }
  newNode->next = head;
  head = newNode;
}

void printNode(Node *head) {
  Node *temp = head;
  while (temp != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

void removeDuplicates(Node *head) {
  Node *prev = head;
  Node *curr = prev->next;
  while (curr->next != nullptr) {
    if (prev->data == curr->data) {
      prev->next = curr->next;
    }
    curr = curr->next;
    if (prev->data != curr->data) {
      prev = prev->next;
    }
  }
  if(curr->data==prev->data){
      prev->next=nullptr;
  }
  cout << endl << prev->data << "curr's data " << curr->data;
}

int main() {
  // init Linked list with name head.
  Node *head = new Node(3);
  // Insert values in node
  insertNode(head, 3);
  insertNode(head, 2);
  insertNode(head, 2);
  insertNode(head, 1);
  insertNode(head, 1);

  // Printing values of Head before removing duplicates
  printNode(head);
  // Function to remove duplicates from Node List
  removeDuplicates(head);
  // Printing values of Head after removing duplicates
  cout << endl;
  printNode(head);
  return 0;
}
