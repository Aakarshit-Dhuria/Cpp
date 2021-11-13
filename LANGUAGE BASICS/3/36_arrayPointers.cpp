#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30};
    int *ptr = arr;
    //! here ptr is going to store the address of first variable of the array.
    cout << sizeof(arr) << "\n";
    cout << sizeof(ptr) << "\n";
    cout << *(arr + 2) << "\n"; // not recommended
    cout << arr[2] << "\n";
    cout << ptr[2] << "\n"; // not recommended
    cout << *(ptr + 2) << "\n";
    return 0;
}