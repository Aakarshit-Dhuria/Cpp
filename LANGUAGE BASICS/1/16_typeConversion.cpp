// For type conversion following sequence is followed
// Bool  to Char to Int to Double

#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    char y = 'A'; //? ASCII value of A is 65
    cout << x + y << "\n";
    float z = 6.5;
    cout << x + z << "\n";
    bool b = 1;
    cout << x + b << "\n";
}