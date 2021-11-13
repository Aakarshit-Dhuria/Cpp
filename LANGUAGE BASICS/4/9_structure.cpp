//! Structure and class differ in inheritance also. Default for derived class of struct is public and for class is private.

#include <iostream>
using namespace std;

struct Base
{
    // public:
    int x;
};
struct Derived : Base
{
};
//! as the default for struct is public only therefore this code runs fine
int main()
{
    Derived d;
    d.x = 20; // compiler error
    cout << d.x;
    return 0;
}