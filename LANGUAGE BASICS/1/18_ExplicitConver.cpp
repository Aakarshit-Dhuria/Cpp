//! C++ style Explicit Conversion

#include<iostream>
using namespace std;

int main()
{
    int x = 15;
    int y = 2;
    
    double z = static_cast<double>(x) / y;
    // Static Cast is used because it checks the validity of casting whether it is possible or  not first and then only  does type conversion
    cout << z;
    return 0;
}
