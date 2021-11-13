#include <typeinfo>
#include <iostream>
using namespace std;

int main()
{
    auto a = 10;
    auto b = 15.5;
    cout << a << "\n" << b;
    cout << typeid(a).name() << "\n";
    cout << typeid(b).name() << "\n";
    return 0;
}