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

void insertNode(Node * &root,int val){
    Node * temp=new Node(val);
    if(root==NULL){
        root=temp;
        return;
    }
    temp->next=root;
    root=temp;
}
void removeNode(Node * &root,int pos){
    int idx=0;
    Node * curr;
    Node * temp=root;
    while(idx!=pos){
        idx++;
        temp=temp->next;
    }
    cout<<temp->val;
}
void printNode(Node * root){
    Node * temp=root;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main() {
  Node *n = new Node(15);
  int i=10;
  while(i--){
      insertNode(n,i);
  }
  printNode(n);
  removeNode(n,3);
  return 0;
}
