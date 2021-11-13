#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;
    int *ptr = &x;
    cout << *ptr << "\n";
    x = x + 30;
    cout << *ptr << "\n";
    *ptr = *ptr + 40;
    cout << x;
    return 0;
}