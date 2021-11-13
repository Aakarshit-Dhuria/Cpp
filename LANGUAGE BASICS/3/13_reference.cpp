// Reference Variables
//! refernce variables are actually constant pointers in c++
//! they must be assigned a value during declaration
//! they cannot refer to another location(once they are assigned one location)
//! Cannot be null
//! Safer and easier to use

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;
    int &y = x;
    //! Here y is a refernece variable of x so any changes made to either x or y will be reflected in both
    cout << y << " ";
    x = x + 5;
    cout << y << " ";
    y = y + 5;
    cout << x;
    return 0;
}