// Example 
#include <iostream>
using namespace std;

class Base
{
// protected:
// private:

public:
    int x;
    Base(int a) : x(a) { cout << "Base\n"; }
};

class Derived : private Base
{
private:
    int y;

public:
    Derived(int a, int b) : Base(a), y(b) { cout << "Derived\n"; }
    void print() { cout << x << " " << y << endl; }
};

int main()
{
    Derived d(10, 20);
    d.print();
    // cout << d.x;
    return 0;
}