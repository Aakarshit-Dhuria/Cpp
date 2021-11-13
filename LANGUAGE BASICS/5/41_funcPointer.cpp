// returning a function pointer

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

// typedef int (*mathFun)(int, int); //here we are defining a type using typedef

// mathFun fun(int type) // fun (function) //mathFun (return type of function) (mathFun defined above) //
int(*fun(int type))(int,int)
{
    if (type == 1)
    {
        return add;
    }
    if (type == 2)
    {
        return sub;
    }
}

int main()
{
    int (*someFun)(int, int);
    someFun = fun(1);
    int c = someFun(1, 2);
    cout << c;
    return 0;
}