// Reference CppNuts(Youtube)

// Friend Function and Class in C++

// Notes:
// 1. Keyword "friend" is used to make some function or class as a friend of yours.
// 2. Friend function or friend class can access private/public/protected Data member or member functions of another class.
// 3. Function can not become friend of another function
// 4. Class can not become friend of function.
// 5. Friendship is not mutual. If a class A is a friend of B , then B doesnt become friend of A automatically.
// 6. Friendship is not inherited.

// friend class and functions shouldnt preferably be used whenever we need to use private mebers we can always write functions inside the class itself.

#include <iostream>
using namespace std;

class Base
{
    int x;

public:
    Base() {}
    Base(int a) : x(a) {}
    friend class GetSet;
};

class GetSet
{
public:
    void set(Base &obj, int x)
    {
        obj.x = x;
    }

    int get(Base &obj)
    {
        return obj.x;
    }
};

int main()
{
    Base obj(10);
    GetSet gs;
    cout << gs.get(obj) << endl;
    gs.set(obj, 20);
    cout << gs.get(obj) << endl;
    return 0;
}
