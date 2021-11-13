//! Example of Scientific formatting of floating points

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double x = 1.23, y = 1122456.453;
    cout << std::scientific;
    cout << x << "\n";
    cout << y << "\n";
    cout << std::setprecision(2);
    cout << x << "\n";
    cout << y << "\n";
    double z = 1.2e+7;
    cout << z;
    return 0;
}