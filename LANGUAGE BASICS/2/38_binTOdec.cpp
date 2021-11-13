// Binary to decimal

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int val = 0;
    int base = 1;

    while (n > 0)
    {
        int last_digit = n % 10;
        val = val + (last_digit * base);
        n = n / 10;
        base = base * 2;
    }
    cout << val;
    return 0;
}