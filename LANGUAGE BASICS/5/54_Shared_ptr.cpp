// Shared Pointer in C++

// Notes:
// 1. shared_ptr is a smart pointer which can share the ownership of the object (managed object).
// 2. several shared_ptr can point to same object.
// 3. it keeps a reference count to maintain how many shared ptr are pointing to the same object and once last shared ptr goes out of scope then the managed object gets deleted.
// 4. shared ptr is threads safe and not thread safe.
// a. control block is thread safe (control block is the one which keeps the reference count)
// b. managed object is not
// 5. there are three ways shared ptr will destroy managed object:
// a. If the last shared ptr goes out of scope
// b. if you initialise shared ptr wilh some other shared ptr
// c. if u reset shared ptr
// 6. Reference count doesn't work when we use reference or pointer of shared ptr(only works with value)

#include <iostream>
#include <memory>
using namespace std;

class Foo
{
    int x;

public:
    Foo(int x) : x(x) {}
    int getX() { return x; }
    ~Foo() { cout << "~Foo" << endl; }
};

int main()
{
    // Foo *f = new Foo(1);
    // cout << f->getX() << endl;

    shared_ptr<Foo> sp(new Foo(100));
    cout << sp->getX() << endl;
    cout << sp.use_count() << endl; // use_count gives the reference count
    shared_ptr<Foo> sp1 = sp;
    cout << sp.use_count() << " " << sp1.use_count() << endl; //both the shared pointers will give same value of reference count.

    // here we will use reference to create a shared pointer therefore the reference count will not increase because the reference points points to the same location only.
    shared_ptr<Foo> &sp2 = sp;
    cout << sp.use_count() << endl;

    // same happens when we use pointer:
    shared_ptr<Foo> *sp3 = &sp;
    cout << sp3->use_count() << endl;

    return 0;
}