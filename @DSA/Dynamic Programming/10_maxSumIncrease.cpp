//// Maximum Sum Increasing Subsequence

// When array is sorted(with no negative element), msis is sum of all elements.
// When array is reverse sorted , msis is largest element.

#include <iostream>
using namespace std;

int MSIS(int arr[], int n)
{
    int msis[n];
    for (int i = 0; i < n; i++)
    {
        msis[i] = arr[i];
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
            {
                msis[i] = max(msis[i], arr[i] + msis[j]);
            }
        }
    }
    int res = msis[0];
    for (int i = 0; i < n; i++)
    {
        res = max(res, msis[i]);
    }
    return res;
}

int main()
{
    int arr[] = {3, 20, 4, 6, 7, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << MSIS(arr, n);
    return 0;
}