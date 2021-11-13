// PREFIXES IN LITERALS
// 1. NO PREFIX : DECIMAL(NORMALLY USED)
// 2. 0x or 0X(case insensitive) : HEXADECIMAL
// 3. 0 : OCTAL
// 4. 0B OR Ob : BINARY
#include <iostream>
using namespace std;

int main()
{
    int a = 20;
    int b = 0x1A;   //? 1A = 1* 16**0 + 1 * 16**1
    int c = 016;    //? 16 = 6* 8**0 + 1* 8**1
    int d = 0b11;   //? 11 = 1* 2**0 + 1* 2**1
    int e = 0b1110; //? 1110 = 1*(2**1)+1*(2**2)+1*(2**3)
    
    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    cout << d << "\n";
    cout << e << "\n";

    return 0;
}