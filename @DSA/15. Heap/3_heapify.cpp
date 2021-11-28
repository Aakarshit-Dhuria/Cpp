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
    int parent(int i) { return ((i - 1) / 2); }

    void insert(int x)
    {
        if (size == capacity)
            return;
        size++;
        arr[size - 1] = x;
        for (int i = size - 1; i != 0 and arr[parent(i)] > arr[i];)
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

    // this function assumes that only the root might be violating the min heap property and rest is already min heap.
    // Time : O(h) = O(log n) { h is height and n is number of nodes}
    // Aux Space : O(h) {recursion}
    void minHeapify(int i)
    {
        int lt = left(i);
        int rt = right(i);
        int smallest = i;
        if (lt < size and arr[lt] < arr[i])
            smallest = lt;
        if (rt < size and arr[rt] < arr[smallest])
            smallest = rt;
        if (smallest != i)
        {
            swap(arr[i], arr[smallest]);
            minHeapify(smallest);
        }
    }

    // getmin function would only give the value of the minimum element. it is a constant time operation. the minimum element is directly the root of the heap tree i.e. the element at index 0 of the array.
    // but this extract min function removes the minimum element from the heap i.e. the root of the heap tree.
    // Time : O(log n) {extract min itself is a constant time i.e. theta(1) operation but it calls min heapify which is O(log n) operation}
    // Aux Space : O(log n) {it also depends on minheapify function . it can be O(1) if minheapify is written iteratively.}
    int extractMin()
    {
        if (size <= 0)
            return INT_MAX;
        if (size == 1)
        {
            size--;
            return arr[0];
        }
        swap(arr[0], arr[size - 1]);
        size--;
        minHeapify(0);
        return arr[size];
    }
};

int main()
{
    MinHeap h(11);
    h.insert(3);
    h.insert(2);
    h.insert(15);
    h.insert(20);
    cout << h.extractMin() << " ";
    return 0;
}