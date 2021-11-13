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

struct Queue
{
    Node *front, *rear;
    int size;
    Queue()
    {
        front = NULL;
        rear = NULL;
        size = 0;
    }
    void enqueue(int x)
    {
        Node *temp = new Node(x);
        size++;
        if (front == NULL)
        {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }
    void dequeue()
    {
        if (front == NULL)
            return;
        Node *temp = front;
        front = front->next;
        size--;
        if (front == NULL)
            rear = NULL;
        delete (temp);
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.dequeue();
    q.dequeue();
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.dequeue();
    cout << (q.front)->data << endl;
    cout << (q.rear)->data << endl;
    return 0;
}