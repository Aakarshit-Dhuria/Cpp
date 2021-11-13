// Logical Operators:
//! 1. Binary : && or and operator (any can be used)
//!             || or or operator (any of the two can be used)
//! 2. Unary : ! or not operator 

#include<iostream>
using namespace std;

int main()
{
    int x = 10, y = 20;
    bool res = (x > 0 && x < 100);
    cout << res << "\n";
    res = (x > 0 or x > y);
    cout << res << "\n";
    res = !res;
    cout << res << "\n";
    return 0;
}