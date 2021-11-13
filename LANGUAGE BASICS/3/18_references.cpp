// Example

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10, z = 20;
    int &y = x;
    y = z;
    //! As y is a refernece to x therefore the value of z is assigned to both x and y.
    y = y + 5;
    cout << x << " " << y << " " << z;
    return 0;
}