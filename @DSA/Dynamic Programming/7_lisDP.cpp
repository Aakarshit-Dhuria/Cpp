//// Longest Increasing Subsequence
// time complexity is atleast O(2^n)

#include <iostream>
using namespace std;

//// Dynamic Programming : Time - theta(n^2) Aux Space - theta(n).
int LIS(int arr[], int n)
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
        res = max(lis[i], res);
    }
    // int res = *max_element(lis,lis+n);
    // first include algorithm library.
    return res;
}

int main()
{
    // int arr[] = {3, 4, 2, 8, 10, 5, 1}; // 4
    int arr[] = {10, 5, 18, 7, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << LIS(arr, n);
    return 0;
}