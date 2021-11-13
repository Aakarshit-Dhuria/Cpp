// Weak pointers
//they dont have specific function like make_shared to create them.
// they are temporary pointers
// if we create a shared pointer object, and we dont want ownership of that object and dont want to increase reference count for that object, then we can create a weak pointer to that object.
// the purpose is sometimes we want to create some temporary pointers

// another purpose of weak pointers is the problem of cyclic dependencies with shared pointers.
//      --> we can have one of them as weak pointer which reduces the reference count to 1.
#include <iostream>
#include <memory>
using namespace std;

class Test
{
    int x;

public:
    Test(int a = 0)
    {
        x = a;
        cout << "Constructor\n";
    }
    ~Test() { cout << "Destructor\n"; }
    void fun() { cout << x << endl; }
};

int main()
{
    weak_ptr<Test> p1;
    {
        shared_ptr<Test> p2 = make_shared<Test>(10);
        p1 = p2;
        cout << p1.use_count() << endl; // we can get reference count from weak pointer also.
        cout << p2.use_count() << endl;
        shared_ptr<Test> p3 = lock(p1); // the lock function converts the weak pointer into a shared pointer . the lock function returns a shared pointer to the object pointed by the weak pointer.
    }
    cout << p1.expired() << endl; // expired function returns if the object has been dealocated and false if it still exists.
    cout << "Main ends!\n";
    return 0;
}