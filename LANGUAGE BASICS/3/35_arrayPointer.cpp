#include <bits/stdc++.h>
using namespace std;
//! writing int arr[] in function parameters is same as writing int*arr because arrays are always passed as pointers to functions.
void fun(int arr[])
{
    // arr = nullptr;
    int n = sizeof(arr) / sizeof(arr[0]);
    //! sizeof operator should never be used to compute the number of elements of an array in functions because sizeof(arr) will give the size of pointer not the actual array.
    //'sizeof' on array function parameter 'arr' will return size of 'int*'
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    fun(arr);
    //! To solve the problem of size of operator we always pass n as a function parameter.
    // fun(arr, n);
    return 0;
}