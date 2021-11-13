#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 33, 45, 5};
    cout << sizeof(arr) << endl;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Number of elements in an array: " << n;
}