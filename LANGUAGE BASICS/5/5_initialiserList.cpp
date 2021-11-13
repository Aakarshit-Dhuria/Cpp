//! With initialiser list

#include <iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout << "Default\n";
    }
    Test(int x)
    {
        cout << "Parameterised\n";
    }
};

class Main
{
    Test t;
// In initialiser list the objectsf
// when using initialiser list the object t is directly initialised with the given value and only the parametrised constructor is called.
public:
    Main() : t(10)
    {
    }
};

int main()
{
    Main m;
    return 0;
}