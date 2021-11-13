//// Longest Increasing Subsequence in O(n log n)
//// BINARY SEARCH
// Time - O(n log n)
// Aux Space - O(n)

#include <iostream>
#include <vector>
using namespace std;

int ceilIdx(vector<int> tail, int l, int r, int x)
{
    while (r > l)
    {
        int m = l + (r - l) / 2;
        if (tail[m] >= x)
        {
            r = m;
        }
        else
        {
            l = m + 1;
        }
    }
    return r;
}

// we can use tail array also but for optimisation we can also use vector.
int LIS(int arr[], int n)
{
    vector<int> tail;
    int len = 1;
    // tail[0] = arr[0];
    tail.push_back(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > tail[len - 1])
        {
            // tail[len] = arr[i];
            tail.push_back(arr[i]);
            len++;
        }
        else
        {
            int c = ceilIdx(tail, 0, len - 1, arr[i]);
            tail[c] = arr[i];
        }
    }
    return len;
}

int main()
{
    int arr[] = {3, 10, 20, 4, 6, 7};
    int n = 6;
    cout << LIS(arr, n);
    return 0;
}