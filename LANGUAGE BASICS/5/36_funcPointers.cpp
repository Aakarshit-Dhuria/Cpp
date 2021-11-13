// Example 2

#include <iostream>
using namespace std;

int fun(int x,int y){
    return (x + y);
}

int main()
{
    auto fun_ptr = fun; // int(*fun_ptr)(int,int) = fun;
    cout << fun_ptr(10, 20);
    return 0;
}