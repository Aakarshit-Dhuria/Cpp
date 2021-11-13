// Template Smart Pointer
// can be of any type

#include <iostream>
using namespace std;

template <class T>
// this creates a generic class smart pointer which can be used for any primitive or user defined data type by just specifying the data type using arrow brackets.
class SP
{
    T *ptr;

public:
    SP(T *p = nullptr) { ptr = p; }
    ~SP() { delete ptr; }
    T &operator*() { return *ptr; }
    T *operator->() { return ptr; }
};

int main()
{
    SP<int> sp(new int());
    // here we have specified data type as int to the smart pointer.
    *sp = 20;
    cout << *sp;
    return 0;
}

// Problems with smart Pointers

// int main(){
//     int *ptr1 = new int(10);
//     {
//         int *ptr2 = ptr1; // here the pointer ptr2 points to the same memory address as ptr1.
//         SP<int> sp(ptr2);
//     }
// as ptr2 goes out of scope it is destructed by the destructor of class SP i.e the memory is deallocated but ptr1 still points to that location which means ptr1 is pointing to memory which has been deallocated.
//     cout << *ptr1;
// }