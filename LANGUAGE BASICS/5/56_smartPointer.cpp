// Smart Pointer
// Need for Smart Pointer: the problem with normal pointers is memory leak. if we dynamically allocate memory and if we dont manually dealocate this memory the compiler doesnt give any error or warning
// Smart pointer solve this problem by wrapping a given pointer into a class object.

#include <iostream>
using namespace std;

class SP
{
    int *ptr;

public:
    SP(int *p = NULL) { ptr = p; }
    ~SP() { delete ptr; }
    int &operator*() { return *ptr; }
    // here we are returning an integer reference in this operator overloading function.
};

int main()
{
    SP sp(new int());
    *sp = 20;
    // as we have overloaded the dereference operator and there it returns a reference therefore we can use it on the left hand side to assign a value to it.
    cout << *sp << endl;
    return 0;
}