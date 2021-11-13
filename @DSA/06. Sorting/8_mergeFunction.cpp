//// MERGE FUNCTION OF MERGE SORT

#include <iostream>
using namespace std;

//// Time - theta(n)  // n is n1 + n2
//// Aux Space - theta(n)
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

int main()
{
    int a[] = {10, 15, 20, 40, 8, 11, 55};
    int low = 0, mid = 3, high = 6;
    merge(a, low, mid, high);
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}