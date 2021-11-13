//// Longest Chain of Pairs

// First sort the array according to first values
// Then return lis of sorted array.

#include <iostream>
#include<vector>
using namespace std;

class Pair
{
public:
    int a;
    int b;
};

int maxChainLength(Pair arr[], int n)
{
    // int *mcl = new int[sizeof( int ) * n ];
    // for ( i = 0; i < n; i++ )
    //     mcl[i] = 1;

    vector<int> mcl(n, 1);
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i].a > arr[j].b)
            {
                mcl[i] = max(mcl[i], mcl[j] + 1);
            }
        }
    }
    int res = mcl[0];
    for (int i = 0; i < n; i++)
    {
        res = max(res, mcl[i]);
    }
    return res;
}

int main()
{
    Pair arr[] = {{5, 24}, {15, 25}, {27, 40}, {50, 60}};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Length of maximum size chain is " << maxChainLength(arr, n);
    return 0;
}