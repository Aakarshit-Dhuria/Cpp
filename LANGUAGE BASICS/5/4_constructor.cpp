//! Without initialiser list

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
public:
// before executing the constructor body of a class, all the members of the class are first initialised with default values or random values.
// here object t of class Test is initialised with a default constructor of its class therefore default gets printed in this case.
    Main()
    {
        t = Test(10);
    }
};

int main()
{
    Main m;
    return 0;
}