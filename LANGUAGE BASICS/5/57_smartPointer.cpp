#include <iostream>
using namespace std;

class Test
{
public:
    int x, y;
    Test(int a = 0, int b = 0)
    {
        x = a;
        y = b;
        cout << "Constructor called!\n";
    }
    ~Test()
    {
        cout << "Destructor called!\n";
    }
};

class SP
{
    Test *ptr;

public:
    SP(Test *p = nullptr) { ptr = p; }
    ~SP() { delete ptr; }
    Test &operator*() { return *ptr; }
    Test *operator->() { return ptr; }
};

int main()
{
    cout << "Main Begins!\n";
    {
        SP sp(new Test(10, 20));
    }
    cout << "Main Ends!\n";
    return 0;
}