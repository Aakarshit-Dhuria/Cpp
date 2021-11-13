//! Another example of shortcircuiting in or operator

#include<iostream>
using namespace std;

int main()
{
    int x = 5;
    bool res = (x == 5) or (x++);
    cout << res << "\n";
    cout << x;
    return 0;
}