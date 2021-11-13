// Shared Pointers (multiple shared pointers can own same object)
// Its better to use unique pointers because shared pointers give extra load of maintaining the reference count. 
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
    // shared_ptr<Test> ptr1(new (Test(10)));
    shared_ptr<Test> ptr1 = make_shared<Test>(10);  // recommended newer way
    shared_ptr<Test> ptr2 = ptr1;
    cout << ptr1.use_count() << endl;
    cout << ptr2.use_count() << endl;
    return 0;
}