//! In c++ , strings are internally stored as character arrays with \0 as last character like c style strings
//! Advantages over C style strings:
//! 1. We do not have to worry about the size
//! 2. We can assign a string later
//! 3. Support of operators like +, <, >, ==, <=, >=
//! 4. Richer Library of functions
//! 5. Can be converted to C-style strings if needed(using c_str)

#include <iostream>
using namespace std;

int main()
{
    string str;
    str = "Aakarshit";
    cout << str;
    return 0;!
}