// Queue (Codechef)

#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int size;
    int max_size;

public:
    Queue(int default_size = 10)
    {
        arr = new int[default_size];
        size = 0;
        max_size = default_size;
    }

    bool empty()
    {
        return size == 0;
    }

    bool full()
    {
        return size == max_size;
    }

    void enqueue(int d)
    {
        if full ()
        {
            cout << "Queue Overflow\n";
            return;
        }
        arr[size] = d;
        size++;
    }

    void dequeue()
    {
        if empty ()
        {
            cout << "Queue Underflow\n";
            return;
        }
        for (int i = 0; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    int front()
    {
        if empty ()
            return -1;
        return arr[0];
    }

    int back()
    {
        if empty ()
            return -1;
        return arr[size - 1];
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

    return 0;
}