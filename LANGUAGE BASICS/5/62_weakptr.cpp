// Weak Pointers in C++ (Youtube - CppNuts)

// Notes:
// 0. Unique_ptr is for unique ownership and shared pointer is for shared ownership then weak ptr is for non-pwnership smart pointer
// 1. It is actually reference to an object managed by a shared_ptr.
// 2. A weak ptr is created as a copy of shared ptr.
// 3. We have to convert weak ptr to shared ptr in order to use the managed object.
// 4. It is used to remove cyclic dependency between shared ptr.

#include <iostream>
#include <memory>
using namespace std;

int main()
{
    auto sharedPtr = make_shared<int>(100);
    weak_ptr<int> weakPtr(sharedPtr);
    // here we are giving shared ptr to create a weak ptr.

    cout << "Weakptr.use_count(): " << weakPtr.use_count() << endl;
    cout << "sharedptr.use_count(): " << sharedPtr.use_count() << endl;
    cout << "weakPtr.expired(): " << weakPtr.expired() << endl;

    if (shared_ptr<int> sharedPtr1 = weakPtr.lock()) // lock function checks if the weak ptr is alive or not, i.e whether the shared ptr exists,if it exists then sharedptr1 creates a shared pointer to sharedptr.
    {
        cout << "Sharedptr: " << *sharedPtr << endl;
        cout << "sharedPtr1.use_count(): " << sharedPtr1.use_count() << endl;
    }
    else
    {
        cout << "Don't get the resourse!\n";
    }

    weakPtr.reset();
    // now the weakPtr is no longer pointing to the sharedPtr.

    if (shared_ptr<int> sharedPtr1 = weakPtr.lock()) 
    {
        cout << "Sharedptr: " << *sharedPtr << endl;
        cout << "sharedPtr1.use_count(): " << sharedPtr1.use_count() << endl;
    }
    else
    {
        cout << "Don't get the resourse!\n";
    }

    return 0;
}