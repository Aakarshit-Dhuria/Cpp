//! C style strings
//! strcpy function is used to initialise a string which was declared earlier but not initialised
// we cant directly assign the string into the character array

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[5];
    // str = "gfg" is not valid.
    strcpy(str, "gfg");
    cout << str;
    return 0;
}