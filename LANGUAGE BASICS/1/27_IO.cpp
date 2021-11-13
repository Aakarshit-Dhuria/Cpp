// IO MANIPULATION OF INTEGER VALUES
// 1. SHOWBASE -- NOSHOWBASE
// 2. SHOWPOS  -- NOSHOWPOS
// 3. UPPERCASE -- NOUPPERCASE
#include<iostream>
using namespace std;

int main()
{
    int a = 26;
    cout << std::showbase;
    //? It displays the complete representation of hexadecimal and octal numbers using thier respective prefixes
    cout << std::oct;
    cout << a << "\n";
    cout << std::hex;
    cout << a << "\n";
    cout << std::showpos;
    //? showpos dispays a positive sign for positive numbers.
    cout << a << "\n";
    cout << std::uppercase;
    //? uppercase converts all the letters in the hexadecimal representation to uppercase.
    cout << a << "\n";
    return 0;
}
//! We can use noshowbase , noshowpos and nouppercase anywhere to stop them from executing for the rest of the program