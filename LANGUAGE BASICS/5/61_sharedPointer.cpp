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
    shared_ptr<Test> p1;
    {
        shared_ptr<Test> p2 = make_shared<Test>(10);
        p1 = p2;
    }
    // destructor wont be called here because in shared ptrs destructor is called when all the shared ptrs go out of scope.
    cout << "Main Ends\n";
    return 0;
}