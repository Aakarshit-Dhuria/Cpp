#include <iostream>
using namespace std;

class A
{
};
class B
{
};
// first constructor of A is called then constructor of B is called then constructor of C is called.
class C : public A, public B
{
};

int main()
{
    C obj;
    return 0;
}