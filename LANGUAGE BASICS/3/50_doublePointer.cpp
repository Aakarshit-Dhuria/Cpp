//! MULTIDIMENSIONAL ARRAYS USING DOUBLE POINTER METHOD
//! DYNAMIC MEMORY ALLOCATION ON HEAP
//! Advantage : --> We can create rows of different lengths by varying the value of n.
//! --> We can give different dimensions to functions.
//! Disadvantage : --> Its not cache friendly. When traversing this array as the memory is not allocated continuously in this case.

#include <iostream>
using namespace std;

int main()
{
    int m = 3, n = 2;
    int **arr;
    arr = new int *[m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 10;
            cout << arr[i][j] << " ";
        }
    }
    return 0;
}