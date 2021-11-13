// FLOATING POINT LITERALS
// ALLOWED PREFIXES : 0X
// SUFFIXES :
// f = float
// l = long double
// no suffix = double

#include <iostream>
using namespace std;
int main()
{
    float a = 10.5f;
    double b = 10.515;
    float c = 2.1e15f;    //? 2.1 * 10**15
    double d = 200.1e-80; //? 200.1 * 10**(-80)
    double g = 0x1A.1p2;  //? 1A = 26  .1 = 1/16
                          //? 26.0625 * 2**2
                          //? 104.25
    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    cout << d << "\n";
    cout << g << "\n";
    return 0;
}