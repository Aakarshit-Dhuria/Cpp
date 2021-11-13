//! Unary Operators are again of two types:
//! 1. Postfix like x++ , x--
//! 2. Prefix like ++x , --x

#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = x++; //! y = x then x = x + 1
    int z = ++x; //! x = x + 1 then z = x
    int a = x--;
    int b = --x;
    cout << x << "\n";
    cout << y << "\n";
    cout << z << "\n";
    cout << a << "\n";
    cout << b << "\n";

    return 0;
}