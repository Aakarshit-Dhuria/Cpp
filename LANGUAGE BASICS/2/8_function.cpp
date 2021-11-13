#include<iostream>
using namespace std;

void fun()
{
    cout << "fun() called.\n";
}

int main()
{
    cout << "Before Calling fun()\n";
    fun();
    fun();
    cout << "After calling fun()\n";
    return 0;
}