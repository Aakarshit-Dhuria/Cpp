// Function Pointer
// Memory has 4 sections: stack,heap,data,text.
// A function pointer holds an address of text section of memory.
// i.e
// Notes:
// --> function pointer stores the address of a function(or set of instructions).
// --> Like normal functions we can pass a function pointer to other functions
// --> used in qsort(),sort(),for_each() or any other place where we wish to provide functionality as a parameter.
// --> Used to implement virtual functions.

// Example 1

#include <iostream>
using namespace std;

void fun()
{
    cout << "Aakarshit" << endl;
}

int main()
{
    void (*fun_ptr)() = &fun; // auto fun_ptr = fun can also be used.
    // void (return type) //(*fun_ptr) (variable name and star to represent it is a pointer) // ()  (no parameters)  // &fun (address of function,& operator is optional beause in c/c++ function name automatically gives address of the function ,we can also remove the & operator ,it will still work same).
    fun_ptr(); // (*fun_ptr)() can also be used
    // here we call the function using function pointer
    // cout << fun; to check function name gives address
    return 0;
}