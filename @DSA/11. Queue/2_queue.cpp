// Efficient implementation of queue using circular array

#include <iostream>
using namespace std;

struct Queue
{
    int *arr;
    int front, cap, size;
    Queue(int c)
    {
        arr = new int[c];
        cap = c;
        front = 0;
        size = 0;
    }

    bool isFull() { return cap == size; }
    bool isEmpty() { return size == 0; }
    int getFront()
    {
        if (isEmpty())
            return -1;
        return front;
    }
    int getRear()
    {
        if (isEmpty())
            return -1;
        return (front + size - 1) % cap;
    }
    void enqueue(int x)
    {
        if (isFull())
            return;
        int rear = getRear();
        rear = (rear + 1) % cap;
        arr[rear] = x;
        size++;
    }
    void dequeue()
    {
        if (isEmpty())
            return;
        front = (front + 1) % cap;
        size--;
    }
};

int main()
{

    return 0;
}