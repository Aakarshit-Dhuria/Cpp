// Example (Doubt)

#include<bits/stdc++.h>
using namespace std;

int &fun()
{
    static int x = 10;
    //! static is used when reference variables are used as it keeps the variable even after the function call ends otherwise the refernce would cause an error.
    //! therefore we should never return reference to a non-static variable
    return x;
}

int main()
{
    int &z = fun();
    //! here z becomes a reference variable of x (return of fun())
    cout << fun() << " ";
    z = 30;
    //! therefore if the value of z is changed, it also changes the value of x in the function.
    cout << fun();
    return 0;
}