//! 6 Bitwise Operators
//! AND : &    1 if both are 1
//! OR : |     1 if any one of the two is 1
//! XOR : ^    1 if both are different

#include<iostream>

using namespace std;

int main()
{
    int x = 3, y = 6;   //! 11 and 110

    cout << (x & y) << "\n";   //! 00..0010
    cout << (x | y) << "\n";   //! 00..0111
    cout << (x ^ y) << "\n";   //! 00..0101
    return 0;
}