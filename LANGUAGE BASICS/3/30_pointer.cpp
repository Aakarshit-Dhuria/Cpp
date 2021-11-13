#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;
    int *p = &x;
    int a = *p;
    *p = *p + 5;
    cout << "Value of x is " << x << endl;
    cout << "Value using dereference operator: " << *p << endl;
    cout << "Address of x: " << p << endl;
    return 0;
}