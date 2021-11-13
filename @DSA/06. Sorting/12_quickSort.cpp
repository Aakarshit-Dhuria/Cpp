//// QUICK SORT

// Divide and Conquer Algorithm
// Worst Case time : O(n^2)
// Despite worst case, it is considered faster because of following reasons:
//  --> In-place
//  --> Cache friendly
//  --> Average Case is O(n log n)
//  --> Tail Recursive
// Partition is key function(Naive, Lomuto, Hoare)

// In case of Quick Sort only naive partition does a stable sort, while lomuto partition and hoare partion although dont use aux space but are unstable sorting algorithms.

//// Quick Sort using Lomuto Partition:
#include <iostream>
using namespace std;

int lPartition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l - 1;
    for (int j = l; j <= h - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return i + 1;
}

void qSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = lPartition(arr, l, h);
        qSort(arr, l, p - 1);
        qSort(arr, p + 1, h);
    }
}

int main()
{
    int arr[] = {8, 4, 7, 9, 3, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    qSort(arr, 0, n - 1);
    for (int x : arr)
        cout << x << " ";
    return 0;
}