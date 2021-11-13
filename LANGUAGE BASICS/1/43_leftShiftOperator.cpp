//! 4th Type Of BINARY OPERATOR
//! LEFT SHIFT OPERATOR <<
//! Suppose x = 3 = 00...011
//! if we do (x << 1) it becomes 00..0110
//! generally(x << i) removes i bits from the start and adds i zeroes at the end
//! (x << 2) becomes 00..1100
//! (x << 4) becomes 00..110000

//? Assuming first y bits are zero, then (x << y) becomes equal to x * 2^y.

#include<iostream>
using namespace std;

int main()
{
    int x = 3;
    cout << (x << 1) << "\n";
    cout << (x << 2) << "\n";
    int y = 4;
    int z = (x << y);
    cout << z << "\n";
    return 0;
}