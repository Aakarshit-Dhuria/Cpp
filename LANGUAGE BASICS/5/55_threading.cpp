// Threading in shared pointer

#include <iostream>
#include <memory>
#include <thread>
using namespace std;

class Foo
{
    int x;

public:
    Foo(int x) : x(x) {}
    int getX() { return x; }
    ~Foo() { cout << "~Foo" << endl; }
};

void fun(shared_ptr<Foo> sp)
{
    cout << "fun: " << sp.use_count() << endl;
}

int main()
{
    shared_ptr<Foo> sp(new Foo(100));
    thread t1(fun, sp), t2(fun, sp), t3(fun, sp);
    cout << "main: " << sp.use_count() << endl;
    t1.join();
    t2.join();
    t3.join();
    return 0;
}