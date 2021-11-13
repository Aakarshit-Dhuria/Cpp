#include <iostream>
using namespace std;

struct Queue
{
    int size, cap;
    int *arr;
    Queue(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
    }

    bool isFull()
    {
        return (size == cap);
    }

    bool isEmpty()
    {
        return (size == 0);
    }

    void enqueue(int x)
    {
        if (isFull())
            return;
        arr[size] = x;
        size++;
    }

    void dequeue()
    {
        if (isEmpty())
            return;
        for (int i = 0; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    int getFront()
    {
        if (isEmpty())
            return;
        return 0;
    }

    int getRear()
    {
        if (isEmpty())
            return -1;
        return size - 1;
    }

    int size()
    {
    }
};

int main()
{

    return 0;
}