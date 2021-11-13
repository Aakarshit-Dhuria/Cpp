//// HOARE 's Partition
// the pivot in this might not be at the correct index
// but still it is better than lomuto becuase it does fewer comparisons.
#include <iostream>
using namespace std;

int partiton(int arr[], int l, int h)
{
    int pivot = arr[l]; //pivot is first element
    int i = l - 1, j = h + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
            return j;
        swap(arr[i], arr[j]);
    }
    return 0;
}

int main()
{
    int arr[] = {5, 3, 8, 4, 2, 7, 1, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << partiton(arr, 0, n - 1) << endl;
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}