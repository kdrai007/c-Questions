#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
void insertAtHead(struct Node *&head, int d)
{
    struct Node *temp = new Node;
    temp->data = d;
    temp->next = head;
    head = temp;
}
void reverseList(struct Node *head)
{
    int cnt = 1;
    struct Node *temp = head;
    while (temp->next != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    while (cnt > 1)
    {
        head->data = temp->data;
    }
}
void displaydata(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int32_t main()
{
    struct Node *head = new Node;
    head->data = 15;
    head->next = NULL;
    insertAtHead(head, 23);
    insertAtHead(head, 25);
    displaydata(head);
    reverseList(head);
    return 0;
}