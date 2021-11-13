// passing function pointer as parameter

#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int fun1(int (*someFun)(int, int))
{
    int c = someFun(1, 2);
    return c;
}

int main()
{
    int c = fun1(add);
    cout << c;
    return 0;
}