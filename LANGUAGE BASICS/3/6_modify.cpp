//! Modifying array using for loop

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 40, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * 2;
        cout << arr[i] << " ";
    }
    return 0;
}