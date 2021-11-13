// Default Printing format of Floating Points
//? 1. Trailing zeros are removed
//? 2. Default precision is 6 (precision means total digits 
//?                            excluding digits after e)
//? 3. When no. of digits before decimal are greater than 6 , power format is used. eg. 1234568.3 is printed as 1.23457e+06
#include<iostream>
using namespace std;

int main()
{
    double x = 1.2300;
    cout << x << "\n";
    double y = 1567.56732;
    cout << y << "\n";
    double z = 1244567.45;
    cout << z << "\n";
    double w = 124456.67;  
    //? when before the decimal exactly 6 digits are there then it is rounded off
    cout << w << "\n";
    double u = 123e+2;
    cout << u << "\n";
    return 0;
}