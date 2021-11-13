// First occurrence of given element in the array

#include <iostream>
using namespace std;
// Naive Solution: Time Complexity - O(n)  Aux Space - O(1)
int firstOccurence(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
// recursive
int firstOccur(int arr[], int low, int high, int x)
{

    int mid = (low + high) / 2;
    if (x > arr[mid])
    {
        return firstOccur(arr, mid + 1, high, x);
    }
    else if (x < arr[mid])
    {
        return firstOccur(arr, low, mid - 1, x);
    }
    else
    {
        if (mid == 0 || arr[mid - 1] != arr[mid])
        {
            return mid;
        }
        else
        {
            return firstOccur(arr, low, mid - 1, x);
        }
    }
}

// Iterative
// time - O(log n) Space - O(1)
int firstOcc(int arr[], int n, int x)
{
    int first = 0, last = n - 1;
    while (first <= last)
    {
        int mid = (first + (last - first)) / 2;
        if (arr[mid] > x)
        {
            first = mid + 1;
        }
        if (arr[mid] < x)
        {
            last = mid - 1;
        }
        else
        {
            if (mid == 0 || arr[mid - 1] != arr[mid])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[] = {5, 10, 10, 15, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cin >> x;
    cout << firstOccurence(arr, n, x);
    return 0;
}