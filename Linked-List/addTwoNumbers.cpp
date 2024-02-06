#include <iostream>
using namespace std;
// Node class to represent each element in the linked list
class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

// LinkedList class to manage the linked list
class LinkedList {
private:
    Node* head;
public:
    LinkedList() : head(nullptr) {}

    // Function to insert a new element at the end of the list
    void insert(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    void printNodes(){
       Node * temp=head; 
       while(temp!=nullptr){
           cout<<temp->data<<" ";
           temp=temp->next;
       }
    }
};

int main(){
    LinkedList* head=new LinkedList();
    head->insert(5);
    head->insert(6);
    head->insert(9);
    head->insert(8);
    head->insert(7);
    head->printNodes();
    return 0;
}

