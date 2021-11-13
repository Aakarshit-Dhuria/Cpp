//! 5th Type of BINARY OPERATOR
//! RIGHT SHIFT OPERATOR >>
//! REMOVES RIGHTMOST BITS AND ADDS ZEROES TO THE LEFT
//! X = 33 : 00..100001
//! X >> 1 : 00..010000
//! X >> 2 : 00..001000
//? THEREFORE (X >> Y) IS EQUIVALENT TO 
//?            floor(X/2^Y)

#include<iostream>
using namespace std;

int main()
{
    int x = 33;
    cout << (x >> 1) << "\n";
    cout << (x >> 2) << "\n";
    int y = 4;
    cout << (x >> y) << "\n";
    
}