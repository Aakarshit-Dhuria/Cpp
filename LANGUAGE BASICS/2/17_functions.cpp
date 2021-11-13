#include <bits/stdc++.h>
using namespace std;

void fun()
{
    static int x = 1;
    //! As a static variable is defined in a function so this line is executed only once across diffrent function calls i.e. it is initialised only once.
    int y = 1;
    x++;
    y++;
    cout << x << " " << y << "\n";
}

int main()
{
    fun();
    fun();
    fun();
    return 0;
}