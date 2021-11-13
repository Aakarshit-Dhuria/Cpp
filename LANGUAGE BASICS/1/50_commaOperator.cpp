#include<iostream>
using namespace std;

int main()
{
    int x = 1, y = 2, z = 3, a;
    a = x, y, z;
    //! As the comma operator has the lowest precedence , even below the assignment operator therefore a is assigned the value of x.
    cout << a;
    return 0;
}