#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int front, rear, size;
    unsigned capacity;
    int *array;
};

Queue *createQueue(unsigned capacity)
{
    Queue *queue = new Queue();
    queue->capacity = capacity;
    queue->front = queue->size = 0;

    queue->rear = capacity - 1;
    queue->array = new int[(
        queue->capacity * sizeof(int))];
    cout << "Creating Queue of " << queue->capacity << " item" << endl;
    return queue;
}
bool isFull(Queue *q)
{
    return q->size == q->capacity;
}
bool isEmpty(Queue *q)
{
    return q->size == 0;
}
void enqueue(Queue *q, int x)
{
    if (isFull(q))
    {
        cout << "Queue is full " << endl;
        return;
    }
    q->rear = (q->rear + 1) % q->capacity;
    q->array[q->rear] = x;
    q->size = q->size + 1;
    cout << x << " is enqued with Queue" << endl;
}
void dequeue(Queue *q)
{
    if (!isEmpty(q))
    {
        q->size = q->size - 1;
        int item = q->array[q->front];
        q->front = q->front + 1 % q->capacity;
        cout << item << " is dequed" << endl;
    }
}

int32_t main()
{
    Queue *q = createQueue(100);
    enqueue(q, 15);
    enqueue(q, 16);
    enqueue(q, 17);
    enqueue(q, 18);
    dequeue(q);
    return 0;
}