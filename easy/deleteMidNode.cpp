#include <iostream>
using namespace std;
struct Node {
  int val;
  struct Node *next;

  Node(int x) {
    val = x;
    next = NULL;
  }
};

void insertNode(Node *&root, int val) {
  Node *temp = new Node(val);
  if (root == NULL) {
    root = temp;
    return;
  }
  temp->next = root;
  root = temp;
}
void removeMidNode(Node *&root) {
  Node *slow = root;
  Node *fast = root;
  while (fast!= NULL) {
    slow = slow->next;
    fast = fast->next->next;
    if(fast==NULL || fast->next==NULL )break;
  }
  cout<<slow->val;
  cout<<endl;
}

void printNode(Node *root) {
  Node *temp = root;
  while (temp != NULL) {
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main() {
  Node *n = new Node(10);
  insertNode(n,11);
  int i = 9;
  while (i>0) {
    insertNode(n, i);
    i--;
  }
  printNode(n);
  removeMidNode(n);
  printNode(n);
  return 0;
}
