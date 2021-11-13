// reference : youtube(cppnuts)

// 1. What is function pointer and how to create them?
// --> Normal Pointer variable stores the address of another variables, function pointer stores the address of another function.
// 

#include <iostream>
using namespace std;

int add(int a,int b){
    return a + b;
}

int main()
{
    int (*fun_ptr)(int, int) = add ;
    // int (*fun_ptr)(int, int) = &add ; //old type
    int c = fun_ptr(1, 2);  //(*fun_ptr)(1,2) old way
    cout << c;
    return 0;
}