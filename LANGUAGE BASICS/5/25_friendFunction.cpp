// Reference CppNuts(Youtube)

// Friend Function and Class in C++
// Notes:
// 1. Keyword "friend" is used to make some function or class as a friend of yours.
// 2. Friend function or friend class can access private/public/protected Data member or member functions of another class.

#include <iostream>
using namespace std;

class Base
{
    int x;

public:
    Base() {}
    Base(int a) : x(a) {}
    friend void set(Base &, int);
    friend int get(Base &);
};

void set(Base &obj, int x)
{
    obj.x = x;
}

int get(Base &obj)
{
    return obj.x;
}

int main()
{
    Base obj(10);
    cout << get(obj) << endl;
    set(obj, 20);
    cout << get(obj) << endl;
    return 0;
}