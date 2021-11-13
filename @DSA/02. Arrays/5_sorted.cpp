// Check if an array is sorted.
#include <iostream>
using namespace std;

// Time Complexity - O(n).  // Constant auxillary space.
bool isSorted(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    // int arr[] = {8, 10, 10, 12, 15};
    int arr[] = {100};
    cout << isSorted(arr, 1);
    return 0;
}