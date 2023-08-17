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
Node * removeNode(Node * root,int pos){
    if(pos==1){
        root=root->next;
        return root;
    }
    int idx=0;
    Node * curr;
    Node * temp=root;
    Node * prev=NULL;
    while(idx<pos-1){
        if(temp==NULL)return root;
        prev=temp;
        temp=temp->next;
        idx++;
    }
    prev->next=temp->next;
    return root;

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
cout<<"Enter position to delete"<<endl;
int pos;
cin>>pos;
  Node *n = new Node(15);
  int i=10;
  while(i--){
      insertNode(n,i);
  }
  printNode(n);
n=removeNode(n,pos);
  printNode(n);
  return 0;
}
