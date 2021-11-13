// Efficient Implementation

// rear is always (front+size-1)%cap

// deleteFront() : front = (front+1)%cap
// insertRear(x)  : rear  = (rear+1)%cap

// insertFront(x) : front = (front-1+cap)%cap
// deleteRear()   : rear  = (rear-1+cap)%cap

#include <iostream>
using namespace std;

struct Deque
{
    int *arr;
    int front, cap, size;
    Deque(int c)
    {
        arr = new int[c];
        cap = c;
        front = 0;
        size = 0;
    }
    bool isFull()
    {
        return size == cap;
    }
    bool isEmpty()
    {
        return size == 0;
    }
    void insertFront(int x)
    {
        if (isFull())
        {
            return;
        }
        front = (front - 1 + cap) % cap;
        arr[front] = x;
        size++;
    }
    void insertRear(int x)
    {
        if (isFull())
        {
            return;
        }
        int rear = (front + size) % cap;
        arr[rear] = x;
        size++;
    }
    void deleteFront()
    {
        if (isEmpty())
        {
            return;
        }
        front = (front + 1) % cap;
        size--;
    }
    void deleteRear()
    {
        if (isEmpty())
        {
            return;
        }
        size--;
    }
    int getFront()
    {
        if (isEmpty())
        {
            return -1;
        }
        return front;
    }
    int getRear()
    {
        if (isEmpty())
        {
            return -1;
        }
        return (front + size - 1) % cap;
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Deque dq(10);
    dq.insertFront(10);
    dq.insertFront(20);
    dq.insertRear(30);
    cout << dq.getFront() << endl;
    cout << dq.getRear() << endl;
    dq.deleteFront();
    dq.deleteRear();
    dq.print();
    return 0;
}