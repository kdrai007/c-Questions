#include <iostream>
using namespace std;

struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};
struct MyQueue
{
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    void print();
    MyQueue() { front = rear = NULL; }
};
void MyQueue::push(int x)
{
    QueueNode *newNode = new QueueNode(x);
    if (front == NULL)
    {
        front = newNode;
        rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}
int MyQueue::pop()
{
    if (front == NULL)
        return -1;
    QueueNode *temp = front;
    int data = temp->data;
    front = front->next;
    delete temp;

    return data;
}
void MyQueue ::print()
{
    QueueNode *temp = front;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    MyQueue q;
    q.push(15);
    q.push(18);
    q.print();
    return 0;
}