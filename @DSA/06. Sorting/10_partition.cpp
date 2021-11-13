//// Partition Function of Quick Sort
//// Partition a given array
// In case of Quick Sort only naive partition does a stable sort, while lomuto partition and hoare partion although dont use aux space but are unstable sorting algorithms.
#include <iostream>
using namespace std;

//// NAIVE PARTITION
// Time - O(n)  and Aux Space - O(n)
void partition(int arr[], int l, int h, int p)
{
    int temp[h - l + 1], index = 0;
    for (int i = l; i <= h; i++)
    {
        if (arr[i] <= arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }
    for (int i = l; i <= h; i++)
    {
        if (arr[i] > arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }
    for (int i = l; i <= h; i++)
    {
        arr[i] = temp[i - l];
    }
}

//// Lomuto Partition with pivot always as last element
// Time - O(n)   // only one traversal
// Aux Space - O(1)
int lPartition(int arr[], int l, int h)
{
    int pivot = arr[h]; //last element
    // swap(arr[p],arr[h])   if pivot is not the last element.
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
    return i + 1; // index of pivot
}

int main()
{
    int arr[] = {5, 13, 6, 9, 12, 11, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    // partition(arr, 0, n - 1, n - 1);
    cout << lPartition(arr, 0, n - 1) << endl; // prints index of pivot element .
    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}