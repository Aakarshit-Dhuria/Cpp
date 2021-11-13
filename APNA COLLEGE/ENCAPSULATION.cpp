#include <bits/stdc++.h>
using namespace std;

class A
{
public: //! Can be accessed anywhere
    void func1()
    {
        cout << "function 1" << endl;
    }

private: //! Cannot be accessed outside the class
    void funct2()
    {
        cout << "function 2" << endl;
    }

protected: //! Can be only accessed inside the class and in inherited class
    void func3()
    {
        cout << "function 3" << endl;
    }
};

int
main()
{
    A obj;
    obj.func1();
    // obj.func2();
}