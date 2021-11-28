// Insert an element in heap
// Time : O(log n)  {inserting element at end of array is O(1) operation and height of a complete binary tree is log n }

#include <iostream>
using namespace std;

class MinHeap
{
    int *arr;
    int size;
    int capacity;

public:
    MinHeap(int c)
    {
        size = 0;
        capacity = c;
        arr = new int[c];
    }
    int left(int i) { return (2 * i + 1); }
    int right(int i) { return (2 * i + 2); }
    int parent(int i) { return (i - 1) / 2; }

    void insert(int x)
    {
        if (size == capacity)
            return;
        arr[size] = x;
        size++;
        for (int i = size - 1; i != 0 and arr[parent(i)] > arr[i];)
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }
};

int main()
{
    MinHeap h(11);
    h.insert(3);
    h.insert(2);
    h.insert(15);
    h.insert(20);
    return 0;
}