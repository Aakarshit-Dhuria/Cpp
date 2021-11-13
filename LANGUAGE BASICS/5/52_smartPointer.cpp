// Smart Pointer (youtube - cppNuts)

// --> Smart Pointer is a class which wraps a raw pointer, to manage the lifetime of the pointer.
// --> The most fundamental job of smart pointer is to remove the chances of memory leak.
// --> It makes sure that the object is deleted if it is not reference any more.

// 1. Unique Pointer(unique_ptr):
//      Allows only one owner of the underlying pointer.

// 2. shared_ptr:
//      Allows multiple owners of the same pointer(Reference count is maintained).

// 3. weak_ptr:
//      It is special type of shared_ptr which doesn't count the reference.

// explicit keyword is used in the constructor to tell the compiler that the object must strictly pass the int pointer to call the constructor i.e. it avoids implicit call to the constructor.

#include <iostream>
using namespace std;

class MyInt
{
public:
    explicit MyInt(int *p = nullptr) { data = p; } //Parameterised constructor
    ~MyInt() { delete data; } // destructor deletes the pointer as soon as the object of that pointer goes out of scope.
    int &operator*() { return *data; } // operator overloading of dereference operator to return the value at address of data(which itself is p).

private:
    int *data;
};

int main()
{
    int *p = new int(10);
    // creating an integer pointer and storing value 10 in it.
    MyInt myint = MyInt(p);
    // creating an object of class MyInt and using parameterised constructor to store the value of p in data.
    cout << *myint << endl;
    return 0;
}