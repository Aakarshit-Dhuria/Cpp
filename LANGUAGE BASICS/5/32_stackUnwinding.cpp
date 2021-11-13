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

int f3()
{
    cout << "f3 begins\n";
    try
    {
        f2();
    }
    catch (int i)
    {
        cout << "Caught Exception\n";
    }
    cout << "f3 ends\n";
    return 0;
}

int main()
{
    f3();
    cout << "End!";
    return 0;
}