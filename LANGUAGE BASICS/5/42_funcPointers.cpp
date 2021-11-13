// Array of function pointers

#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

// typedef int (*mathFun)(int, int);

int main()
{
    // mathFun Arr[2] = {add, sub}; // with typedef (recommended)
    int (*Arr[2])(int, int) = {add, sub}; // without typedef
    int c = (Arr[0])(1, 2);
    int d = (Arr[1])(2, 1);
    cout << c << "\n"
         << d; 
    return 0;
}