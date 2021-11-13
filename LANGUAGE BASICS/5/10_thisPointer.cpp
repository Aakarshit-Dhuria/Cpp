// Reference : CppNuts (Youtube)
//! This Pointer in C++ (quite similar to self in Python).
// this keyword only works for non-static data members because static data members dont belong to the object they belong to the class
// Notes:
// 1. this pointer is used to hold the address of the current (i.e. calling) object(using which we have called particular member function).
// 2. this pointer is a const pointer.
// 3. this pointer is passed as a hidden argument to non-static member functions.
// also this pointer doesn't exist for friend functions and also only exists for member functions.
// 4. Compiler automatically changes all data member access with this pointer.
// 5. It is not passed in static member functions.

#include <iostream>
using namespace std;

class Base
{
    int x;

public:
    Base() {}
    Base(int a) : x{a} {}
    int get()
    {
        // return x; // we can write directly like this also the compiler automatically adds this keyword as given below in internal representation.
        return this->x; // here 'this' points to the address of the object using which the get function is called so it returns the x of that object.
        // here even if we dont write the this keyword it is automatically added by the compiler.
    }
    // Exact internal representation of the above get function.
    /*
    int get(Base * const this){
        return this->x;
    }
    */
    void set(int a)
    {
        this->x = a;
    }
    // internal representation of function set is:
    /*
    void set(Base * const this ,int a)
    {
        this->x = a;
    }
    */

    // Example of a static function:
    static void print(){
        cout << "Hi Aakarshit" << endl;
    }
};

int main()
{
    Base b1;
    Base b2(10);
    cout << b2.get() << endl;
    // internally b2.get() is represented as follows:
    // Base::get(&b2);
    b2.set(20);
    // internally it becomes:
    // Base::set(&b2,20);
    return 0;
}