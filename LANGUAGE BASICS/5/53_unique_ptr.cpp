// Unique Pointer in C++

// Notes:
// 1. unique_ptr is a class template.
// 2. unique_ptr is one of the smart pointer provided by c++11 to prevent memory leaks.
// 3. unique_ptr wraps a raw pointer in it, and deallocates the raw pointer, when unique pointer goes out of scope.
// 4. similar to actual pointers we can use -> and * on the object of unique_ptr ,because it is overloaded in unique_ptr class.
// 5. When exception comes then also it will de-allocate the memory hence no memory leak.
// 6. Not only object we can create array of objects of unique_ptr.

// Operations:
// release , reset , swap , get , get_deleter.

#include <iostream>
#include <memory>
using namespace std;

class Foo
{
    int x;

public:
    explicit Foo(int x) : x{x} {}
    int getX() { return x; }
    // ~Foo() { cout << "Foo Destuctor" << endl; }
};

int main()
{
    Foo *f = new Foo(10);
    cout << f->getX() << endl;

    unique_ptr<Foo> p1(new Foo(10));
    // as p is not  a pointer here so it will be stored on stack therefore it will be automatically removes it.
    // we can also do above like this:
    // Foo *f = new Foo(10);
    // unique_ptr<Foo> p1(f);
    cout << p1->getX() << endl;

    // Another way to create unique pointer :
    unique_ptr<Foo> p2 = make_unique<Foo>(20);
    // we should use make_unique because it provides exception safety i.e if there is some exception it will handle that.
    cout << p1->getX() << " " << (*p2).getX() << endl;
    // both ways to call the function getX().

    // p1 = p2;  // This will fail because you cannot copy ownership.
    unique_ptr<Foo> p3 = move(p1); // Pass: because moving ownership is allowed.
    // this will move pointer p1 to p3 and p1 will become a nullptr.

    Foo *p = p3.get(); // p will get the contents of p3
    cout << p->getX() << endl;

    Foo *p4 = p3.release();
    // p3 will give its ownership to p4 and become a nullptr

    p2.reset(p4);
    cout << p2->getX() << endl;

    return 0;
}