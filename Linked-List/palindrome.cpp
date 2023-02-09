#include <iostream>
#include <stack>

using namespace std;
// Creating node of class
class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int x)
    {
        this->data = x;
        this->next = NULL;
    }
    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory free with data " << value << endl;
    }
};

// Insert Node in start
void insertAtHead(Node *&head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    head = temp;
}
//--------------------------------------------------------------------------------------------------------------------------
// Insert Node in End
void insertAtEnd(Node *&tail, int x)
{
    Node *temp = new Node(x);
    tail->next = temp;
    tail = temp;
}
//--------------------------------------------------------------------------------------------------------------------------
// Insert Node in Middle
void insertAnywhere(Node *&head, Node *&tail, int position, int x)
{
    // Insertion at first position
    if (position == 1)
    {
        Node *temp = new Node(x);
        temp->next = head;
        head = temp;
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    // insertion at last position
    if (temp->next == NULL)
    {
        insertAtEnd(tail, x);
    }
    // creating a Node
    Node *newNode = new Node(x);
    newNode->next = temp->next;
    temp->next = newNode;
}
//--------------------------------------------------------------------------------------------------------------------------
// Deletion of node from linked list by position
void deleteNode(Node *&head, Node *&tail, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        if (prev->next == NULL)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
//--------------------------------------------------------------------------------------------------------------------------
// deletion of node from linked list by value;
void deleteByvalue(Node *head, Node *tail, int value)
{
    Node *temp = head;
    int count = 1;
    while (temp->data != value && temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next != NULL)
    {
        deleteNode(head, tail, count);
        return;
    }
    else
    {
        cout << value << " is not present in Linked List" << endl;
    }
}
//--------------------------------------------------------------------------------------------------------------------------
// Reverse Linked list
Node *ReverseLinkedList(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;
    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
//--------------------------------------------------------------------------------------------------------------------------
// Print all the nodes in linked list
void displayNode(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
//--------------------------------------------------------------------------------------------------------------------------
// Find if linked list is palindrome or not
bool palindrome(Node *head)
{
    stack<int> st;
    Node *temp = head;
    while (temp != NULL)
    {
        st.push(temp->data);
        temp = temp->next;
    }

    while (head != NULL)
    {
        if (head->data != st.top())
        {
            return false;
        }
        head = head->next;
        st.pop();
    }
    return true;
}

int32_t main()
{
    Node *node1 = new Node(1);
    Node *head = node1;
    // Node *tail = node1;
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    if (palindrome(head))
    {
        cout << "palindrome linked list" << endl;
    }
    else
    {
        cout << "not palindrome" << endl;
    }

    return 0;
}