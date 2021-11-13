// Arithmetic Operators are of 2 types:
//! 1. Binary Operators
//! 2. Unary Operators

#include <iostream>
using namespace std;

int main()
{
    int x = 20, y = 10;
    cout << (x + y) << "\n";
    cout << (x - y) << "\n";
    cout << (x * y) << "\n";
    cout << (x % y) << "\n";
    //! The % operator works only for integer values and not for floating points.
    //! Other all operators work for both.

    cout << (-10 % 3) << "\n";
    //! The sign of a % b is same as sign of a.

    // cout << (10 / 0) << "\n";  !Error
    cout << (10.90 / 0) << "\n";  //!infinite
    return 0;
}