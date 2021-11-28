#include <iostream>
using namespace std;

class Base
{
protected:
    int i, j;

public:
    void get()
    {
        cout << "Enter i: ";
        cin >> i;
        cout << "Enter j: ";
        cin >> j;
    }
    void show()
    {
        cout << "i = " << i << endl;
        cout << "j = " << j << endl;
    }
};

class Derived : public Base
{
protected:
    int k;

public:
    void get()
    {
        Base::get();
        cout << "Enter k: ";
        cin >> k;
    }
    void show()
    {
        Base::show();
        cout << "k = " << k << endl;
    }
};

int main()
{
    Base b;
    b.get();
    b.show();
    Derived d;
    d.get();
    d.show();
    return 0;
}