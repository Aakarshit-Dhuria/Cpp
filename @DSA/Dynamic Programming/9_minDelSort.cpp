//// Minimum Deletions to make an array Sorted
//// Using LIS

#include <iostream>
using namespace std;

int minDel(int arr[], int n)
{
    int lis[n];
    lis[0] = 1;

    for (int i = 1; i < n; i++)
    {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
            {
                lis[i] = max(lis[i], lis[j] + 1);
            }
        }
    }
    int res = lis[0];
    for (int i = 0; i < n; i++)
    {
        res = max(res, lis[i]);
    }
    res = n - res;
    return res;
}

int main()
{
    // int arr[] = {5, 10, 3, 6, 7, 8}; // 2
    // int arr[] = {10, 20, 30}; // 0
    int arr[] = {30, 20, 10}; // 2
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << minDel(arr, n);
    // cout << n - minDel(arr, n);
    return 0;
}