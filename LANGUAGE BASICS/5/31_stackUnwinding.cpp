// Stack Unwinding in Exception Handling
// if a function throws this exception and this function does not handle this exception then control goes to caller and then control goes to caller of caller and we keep on searching the handler in the function call stack and once we find the handler the program continues after the handler.

#include <iostream>
using namespace std;

void f1() //throw(int)
{
    cout << "f1 begins\n";
    throw 100;
    cout << "f1 ends\n";
}

void f2() //throw(int)
{
    cout << "f2 begins\n";
    f1();
    cout << "f2 ends\n";
}

int main()
{
    try
    {
        f2();
    }
    catch (int i)
    {
        cout << "Caught Exception\n";
    }
    cout << "End!";
    return 0;
}