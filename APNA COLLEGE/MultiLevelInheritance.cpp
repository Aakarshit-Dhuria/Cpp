//! MULTI LEVEL INHERITANCE

#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void funcA()
    {
        cout << "Function A" << endl;
    }
};

class B : public A
{
public:
    void funcB()
    {
        cout << "Function B" << endl;
    }
};

class C : public B
{
public:
};

int main()
{
    C c;
    c.funcA();
    c.funcB();
    return 0;
}