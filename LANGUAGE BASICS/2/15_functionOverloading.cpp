//! FUNCTION OVERLOADING
//? Same function name with different number of parameters.

#include <bits/stdc++.h>
using namespace std;

int myMax(int x, int y)
{
    return (x > y) ? x : y;
}

int myMax(int x, int y, int z)
{
    return myMax(myMax(x, y), z);
}

int main()
{
    int a = 10, b = 20, c = 50;
    cout << myMax(a, b) << endl;
    cout << myMax(a, b, c) << endl;
    return 0;
}