//// MERGE SORT:
//// 1. Divide and Conquer Algorithm (Divide, Conquer and Merge)
//// 2. Stable Algorithm
//// 3. Time - theta(n log n)  // best possible time for sorting on single cpu
//// 4. Aux Space - O(n)
////    -->There are many variants of merge sort , one of them, Block Merge Sort also works as an in-place.
//// 5. Well suited for Linked Lists. Works in O(1) Aux Space.
//// 6. Used in External Sorting.
//// 7. In general for Arrays, QuickSort outperforms it.
////    --> But still it is used in many library functions.

//! MERGING TWO SORTED ARRAYS:

#include <iostream>
#include <algorithm>
using namespace std;

//// Naive Solution:
//// Time : O((m+n) * log(m+n))
//// Aux Space : theta(m+n)
void merge(int a[], int b[], int m, int n)
{
    int c[m + n];
    for (int i = 0; i < m; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        c[m + i] = b[i];
    }
    sort(c, c + m + n); // this takes most time
    for (int i = 0; i < m + n; i++)
    {
        cout << c[i] << " ";
    }
}

//// Efficient Solution
//// Time - theta(m+n)
void effMerge(int a[], int b[], int m, int n)
{
    int i = 0;
    int j = 0;
    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            cout << b[j] << " ";
            j++;
        } 
    }
    while (i < m)
    {
        cout << a[i] << " ";
        i++;
    }
    while (j < n)
    {
        cout << b[j] << " ";
        j++;
    }
}

int main()
{
    int a[] = {10, 15, 20};
    int b[] = {5, 6, 6, 15};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    effMerge(a, b, m, n);

    return 0;
}