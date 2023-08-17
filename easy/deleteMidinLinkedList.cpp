#include <iostream>
using namespace std;

struct Node {
  int val;
  Node *next;
  Node(int n) {
    val = n;
    next = NULL;
  }
};

Node *deleteMid(Node *head) {
  Node *slow = head;
  Node *fast = head;
  Node *prev = slow;

  while (fast != NULL && fast->next != NULL) {
    prev = slow;
    slow = slow->next;
    fast = fast->next->next;
  }
  prev->next = slow->next;
  return head;
}

int main() {
  Node *head;
  head=deleteMid(head);
  return 0;
}
