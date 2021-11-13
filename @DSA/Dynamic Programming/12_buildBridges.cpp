//// Building  bridges
// Maximum number of bridges which can be made out of the given pairs without crossing or overlapping
// 1. Sort the array in increasing order of first value of pair. If first value are same like (2,6) and (2,3) then consider second element.
// 2. Find the lis of the sorted array according to second values.

// For non-overlapping, if first element is smaller than first element of second then second element must also be smaller than second element of other pair.

#include <iostream>
#include <algorithm>
using namespace std;
// O(n^2);
struct cityPairs
{
    int north, south;
};

bool compare(struct cityPairs a, struct cityPairs b)
{
    if (a.north == b.north)
    {
        return a.south < b.south;
    }
    return a.north < b.north;
}

int maxBridges(struct cityPairs values[], int n)
{
    int lis[n];
    lis[0] = 1;
    sort(values, values + n, compare);

    for (int i = 1; i < n; i++)
    {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (values[i].south > values[j].south)
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
    return res;
}

int main()
{
    // struct cityPairs values[] = {{6, 2}, {4, 3}, {2, 6}, {1, 5}}; // 2
    // int n = sizeof(values) / sizeof(values[0]);
    int n = 10;
    struct cityPairs values[] = {{10, 20}, {2, 7}, {8, 15}, {17, 3}, {21, 40}, {50, 4}, {41, 57}, {60, 80}, {80, 90}, {1, 30}}; // 7
    cout << maxBridges(values, n);
    return 0;
}