//// Maximum Length Bitonic Subsequence
// A Subsequence which is first increasing then decreasing.
// A sorted sequence is Bitonic with decreasing part as empty and reverse sorted is Bitonic with increasing part empty.

#include <iostream>
#include <vector>
using namespace std;
//// O(n^2) time // theta(n) space


int LBS(int arr[], int n)
{
    vector<int> forward(n, 1), backward(n, 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
            {
                forward[i] = max(forward[i], forward[j] + 1);
            }
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (arr[i] > arr[j])
            {
                backward[i] = max(backward[i], 1 + backward[j]);
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, forward[i] + backward[i] - 1);
    }
    return ans;
}

int main()
{
    int arr[] = {1, 11, 2, 10, 4, 5, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << LBS(arr, n);
    return 0;
}

// int LBS(int arr[], int n)
// {
//     int lis[n], lds[n];
//     lis[0] = 1;
//     lds[n - 1] = 1;
//     for (int i = 1; i < n; i++)
//     {
//         lis[i] = 1;
//         for (int j = 0; j < i; j++)
//         {
//             if (arr[j] < arr[i])
//             {
//                 lis[i] = max(lis[i], lis[j] + 1);
//             }
//         }
//     }
//     for (int i = n - 2; i > 0; i--)
//     {
//         lds[i] = 1;
//         for (int j = n - 1; j > i; j--)
//         {
//             if (arr[j] < arr[i])
//             {
//                 lds[i] = max(lds[i], lds[j] + 1);
//             }
//         }
//     }
//     int res = lis[0] + lds[0] - 1;
//     for (int i = 0; i < n; i++)
//     {
//         res = max(res, lis[i] + lds[i] - 1);
//     }
//     return res;
// }