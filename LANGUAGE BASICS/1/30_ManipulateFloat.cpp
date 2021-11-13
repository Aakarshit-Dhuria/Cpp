// Manipulating Default Format of Floating Point
//? 1. setprecision(n) : Changes the default precision.
//? 2. showpoint: Shows trailing zeroes. noshowpoint reverts it.
//? 3. showpos: show +sign for positive values. noshowpos reverts is.
//? 4. uppercase: prints 'e' as 'E'. nouppercase reverts it
// All manipulations once set work throughout the program
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout << std::setprecision(4);
    double x = 15.5683;
    double y = 34267.1;
    cout << x << " " << y << "\n";
    double z = 1.23;
    cout << std::showpoint << z << "\n";
    cout << std::showpos << z << "\n";
    cout << std::uppercase << y << "\n";
    return 0;
}