#include <iostream>
using namespace std;

class Base1
{
protected:
    int m;

public:
    void getm(int x)
    {
        m = x;
    }
};

class Base2
{
protected:
    int n;

public:
    void getn(int y)
    {
        n = y;
    }
};

class Derived : public Base1, public Base2
{
public:
    void display()
    {
        cout << "m = " << m << endl;
        cout << "n = " << n << endl;
        cout << "m * n = " << m * n << endl;
    }
};

int main()
{
    Derived d;
    d.getm(5);
    d.getn(7);
    d.display();
    return 0;
}