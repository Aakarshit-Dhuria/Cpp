// destructors are also called by default by the compiler.
// but we make out own destructor when we allocate dynamic memory in our class because if we dont write the destructor the memory will never be dealocated.
// as default destructor doesnot take care of dynamic memory allocation.
// Therefore whenever we have dynamic memory allocation it is recommended to write a destructor.
#include <iostream>
using namespace std;

class Test
{
    int x;

public:
    Test(int i) : x(i)
    {
        cout << "Cons " << x << endl;
    }
    ~Test()
    {
        cout << "Dest " << x << endl;
    }
};

int main()
{
    Test t1(10);
    Test t2(20);
    // when we have more than one objects in the same scope they are destructed in the reverse order of their creation.
    return 0;
}