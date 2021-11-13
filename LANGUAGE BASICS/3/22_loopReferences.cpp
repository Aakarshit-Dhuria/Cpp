//! RANGE BASED FOR LOOP USING REFERENCES
// Refer readme.txt
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40};
    //! auto x can also be used insted of int x
    for (int &x : arr)
    {
        x = x * 2;
    }
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}