#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void insertAthead(Node *&head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    head = temp;
}
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

//----------------------------------------------------------------------------------------------------------------
// Question Add two Linked List' s data;
Node *reverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *temp = new Node(val);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}
struct Node *add(Node *first, Node *second)
{
    int carry = 0;
    Node *ansHead = NULL;
    Node *ansTail = NULL;

    while (first != NULL || second != NULL || carry != 0)
    {
        int val1 = 0;
        if (first != NULL)
            val1 = first->data;
        int val2 = 0;
        if (second != NULL)
            val2 = second->data;
        int sum = carry + val1 + val2;
        int digit = sum % 10;
        insertAtTail(ansHead, ansTail, digit);
        carry = sum / 10;
        if (first != NULL)
            first = first->next;
        if (second != NULL)
            second = second->next;
    }
    return ansHead;
}

struct Node *addTwoLists(struct Node *first, struct Node *second)
{
    first = reverse(first);
    second = reverse(second);

    Node *ans = add(first, second);
    // reverse the answer
    ans = reverse(ans);
    return ans;
}
//----------------------------------------------------------------------------------------------------------------

int32_t main()
{
    Node *head = new Node(1);
    insertAthead(head, 2);
    insertAthead(head, 3);
    displayNode(head);

    Node *head2 = new Node(3);
    insertAthead(head2, 2);
    insertAthead(head2, 1);
    displayNode(head2);

    Node *sum = addTwoLists(head, head2);
    return 0;
}