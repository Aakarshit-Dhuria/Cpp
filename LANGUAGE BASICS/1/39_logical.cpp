//! SHORT-CIRCUITING IN LOGICAL OPERATORS
//! When using && operator and first condition is false then it directly returns false without executing the second expression.
//! When using or operator and first condition is true, then it directly returns true without executing the second expression.
#include<iostream>
using namespace std;

int main()
{
    int x = 5;
    bool res = (x > 10) && (x++);
    //! here shortcircuting happens as the first is false therefore x is not incremented.
    cout << res << "\n";
    cout << x;
    return 0;
}