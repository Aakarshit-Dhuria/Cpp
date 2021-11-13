//! FUNCTION PARAMETER USING POINTERS

#include <bits/stdc++.h>
using namespace std;

void fun(int *p)
{
    *p = *p + 5;
}

int main()
{
    int x = 10;
    fun(&x);
    cout << x;
    return 0;
}