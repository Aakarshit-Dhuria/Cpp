//! 6TH TYPE OF BITWISE OPERATOR
//! BITWISE NOT ~
//? IT INVERTS ALL THE BITS OF THE GIVEN INTEGER
//! x = 1 : 00...001
//! ~x    : 11...110

#include<iostream>
using namespace std;

int main()
{
    unsigned int x = 1;
    cout << (~x) << "\n";
    x = 5;
    cout << (~x) << "\n";
    return 0;
}