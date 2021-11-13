#include <iostream>
using namespace std;

void merge(int a[], int low, int mid, int high)
{
    int n1 = mid - low + 1, n2 = high - mid;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = a[low + i];
    }
    for (int j = 0; j < n2; j++)
    {
        right[j] = a[mid + 1 + j];
    }

    int i = 0, j = 0, k = low;
    while (i < n1 and j < n2)
    {
        if (left[i] <= right[j])
        {
            a[k] = left[i];
            i++;
            k++;
        }
        else
        {
            a[k] = right[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        a[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = right[j];
        j++;
        k++;
    }
}
//// Time - theta(n log n)
//// Aux Space - theta(n)
void mergeSort(int arr[], int l, int r)
{ 
    if (r > l) // atleast 2 elements
    {
        int m = l + (r - l) / 2; // r-l is used to avoid overflow
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r); 
    }
}

int main()
{

    return 0;
}