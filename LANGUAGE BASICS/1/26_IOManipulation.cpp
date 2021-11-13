// IO MANIPULATION of INTEGER VALUES

#include<iostream>
using namespace std;

int main()
{
    int a = 26, b = 20;
    cout << a << " " << b << "\n";
    cout << std::hex;  // changes a and b to hexadecimal
    cout << a << " " << b << "\n";
    cout << std::oct;  // changes to octal
    cout << a << " " << b << "\n";
    cout << std::dec;  // changes back to normal (decimal)
    cout << a << " " << b << "\n";
    return 0;
}