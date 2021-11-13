//! Explicit Type Conversion
// C - style conversion
// C++ style conversion in next program
#include<iostream>
using namespace std;

int main()
{
    int x = 15;
    int y = 2;
    // double z = x / y;  //? This will return 7 because it is a divison between two integers
    //? To get 7.5 or exact answer we have to do division of double datatype
    double z = double(x) / y;
    cout << z;
    return 0;
}