//! INHERITANCE : 5 TYPES 
//! 1. SINGLE INHERITANCE
//! 2. MULTIPLE INHERITANCE
//! 3. MULTI LEVEL INHERITANCE
//! 4. HYBRID INHERITANCE
//! 5. HIERARCHICAL INHERITANCE

#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void func()
    {
        cout << "Inherited";
    }
};

class B : public A   //! Here class B inherites all the public and protected data members and functions of class A as public members.
{
};

int main()
{
    B obj;
    obj.func();
    return 0;
}