// COunt numbers of 1s in Sorted binary Array

#include <iostream>
using namespace std;

int binary1(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
    }
    return count;
}

int bin1(int arr[], int n)
{
    int i = 0;
    while (arr[i] != 1 and i < n)
    {
        i++;
    }
    return (n - i);
}

// Binary Search
int countOnes(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == 0)
        {
            low = mid + 1;
        }
        else
        {
            if (mid == 0 or arr[mid - 1] == 0)
            {
                return (n - mid);
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return 0;
}

int main()
{
    // int arr[] = {0, 0, 0, 1, 1, 1, 1};  // 4
    // int arr[] = {1, 1, 1, 1, 1};  // 5
    int arr[] = {0, 0, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << binary1(arr, n) << endl;
    cout << bin1(arr, n) << endl;
    return 0;
}