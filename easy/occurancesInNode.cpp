#include <algorithm>
#include <iostream>
using namespace std;

struct node {
  int data;
  struct node *next;

  node(int x) {
    data = x;
    next = NULL;
  }
} *head;
int count(struct node *root, int search_for) {
  node *head = root;
  int i = 0;
  while (head != NULL) {
    if (head->data == search_for) {
      i++;
    }
    head = head->next;
  }
  return i;
}

int main() {

    node * root=new node(12);
    cout<<count(root,12);

    return 0; }
