// Simple implementation of array using deque
// In this front is always equal to 0 and rear is size-1
// Therefore to insert or delete an element from the front we have to move all the elements.
// Thus, In this insertion and deletion at rear is O(1) but insertion and deletion at front is O(n).

#include <iostream>
using namespace std;

struct Deque
{
    int size, cap;
    int *arr;
    Deque(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
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
            return;
        for (int i = size; i >= 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        size++;
        arr[0] = x;
    }
    void insertRear(int x)
    {
        if (isFull())
            return;
        arr[size] = x;
        size++;
    }
    void deleteFront()
    {
        if (isEmpty())
            return;
        for (int i = 0; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }
    void deleteRear()
    {
        if (isEmpty())
        {
            return;
        }
        arr[size - 1] = -1;
        size--;
    }
    int getFront()
    {
        if (isEmpty())
        { 
            return -1;
        }
        return 0;
    }
    int getRear()
    {
        if (isEmpty())
        {
            return -1;
        }
        return size - 1;
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