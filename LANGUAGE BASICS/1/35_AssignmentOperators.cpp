//! ASSIGNMENT OPERATORS
//! = , += , -= , *= , /= , %= , &= , != , <<= , >>= , ^=

#include<iostream>
using namespace std;

int main()
{
    int x = 10, y;
    y = x;
    cout << x << "\n";
    x += 10;
    cout << x << "\n";
    x -= 10;
    cout << x << "\n";
    x *= 2;
    cout << x << "\n";
    x /= 2;
    cout << x << "\n";
    x %= 5;
    cout << x << "\n";
    return 0;
}