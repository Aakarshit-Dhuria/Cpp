// Index of last occurrence

#include <iostream>
using namespace std;
// Recursive
// O(log n) - time
// Aux Space - O(log n)
int lastOccurrence(int arr[], int x, int low, int high, int n)
{
    if (low > high)
    {
        return -1;
    }
    int mid = (high + low) / 2;
    if (arr[mid] > x)
        return lastOccurrence(arr, x, low, mid - 1, n);
    if (arr[mid] < x)
    {
        return lastOccurrence(arr, x, mid + 1, high, n);
    }
    if (mid == n - 1 or arr[mid] != arr[mid + 1])
    {
        return mid;
    }
    else
    {
        return lastOccurrence(arr, x, mid + 1, high, n);
    }
}

// Iterative
// Time - O(log n) // Aux Space= O(1)
int itlastOccur(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            if (mid == n - 1 or arr[mid] != arr[mid + 1])
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10, 15, 20, 20, 40, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cin >> x;
    int low = 0, high = n - 1;
    cout << lastOccurrence(arr, x, low, high, n);
    return 0;
}