// SELECTION SORT:
// TIME - theta(N^2) in all cases
// Does less memory writes compared to Quick Sort,Merge Sort,Insertion Sort,etc. but cycle sort is optimal in terms of memory writes.
// Basic idea for Heap Sort
// Not stable
// In Place

#include <iostream>
using namespace std;
#define INF (unsigned)!((int)0)

// naive approch with aux space
void SelectSort(int arr[], int n)
{
    int temp[n];
    for (int i = 0; i < n-1; i++)
    {
        int min_ind = 0;
        for (int j = 1; j < n; j++)
        {
            if (arr[i] < arr[min_ind])
            {
                min_ind = j;
            }
        }
        temp[i] = arr[min_ind];
        arr[min_ind] = INF;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

// In place implementation
void selectSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_ind = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_ind])
            {
                min_ind = j;
            }
        }
        swap(arr[i], arr[min_ind]);
    }
}
int main()
{
    
    return 0;
}