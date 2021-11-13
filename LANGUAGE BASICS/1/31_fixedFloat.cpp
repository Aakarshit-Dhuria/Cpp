// Three types of floating points:
// 1. Default Float
// 2. Fixed
// 3. Scientific
//? 1. IN fixed and scientific, precision means digits after the decimal
//? 2. If there are not enough digits, trailing zeroes are added
// we can set back to default float anytime

//! Difference Between Fixed and Scientific
//! In fixed, no power(or e) is used
//! In scientific, always uses e

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double x = 1.23, y = 1122456.453;
    cout << std::fixed;
    cout << x << "\n";
    cout << y << "\n";
    cout << std::setprecision(2);   //!fixed using precision is used most in competitive programming
    cout << x << "\n";
    cout << y << "\n";
    double z = 1.2e+7;
    cout << z;
    return 0;
}
