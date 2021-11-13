//! C-style Solution to write general purpose matrix
//! 1. Using Double Pointer

#include <iostream>
using namespace std;

void print(int **arr, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}

int main()
{
    int a;
    int **arr;
    int m = 3, n = 2;
    arr = new int *[m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            arr[i][j] = a;
            // arr[i][j] = i; 
            // cout << arr[i][j] << " ";
        }
    }
    print(arr, m, n);
    return 0;
}