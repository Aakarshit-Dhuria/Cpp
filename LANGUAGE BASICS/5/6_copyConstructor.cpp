#include <iostream>
using namespace std;

class Test
{
    int *ptr;
    // even if we dont write a copy constructor there is a default copy constructor which assigns all the values one by one.
public:
    Test(int x)
    {
        ptr = new int(x);
        // dynamic allocation of memory to the pointer.
    }
    void set(int x)
    {
        *ptr = x;
    }
    void print()
    {
        cout << *ptr << endl;
    }
};
int main()
{
    Test t1(10);
    Test t2(t1); // same as Test t2 = t1;
    //Wrong way : Test t2; t2 = t1; this is not a copy constructor as this will first call the default constructor and then use the assignment operator.
    t2.set(20);
    // as here we used default copy constructor and we have used pointer inside the class to dynamically allocate memory and the default constructor copies members one by one therefore the addresses of t1 are copied to t2  and new memory is not allocated. therefore even if we make changes to t2 it are reflected in t1 also.
    // this type of copy is called shallow copy.
    t1.print();
    t2.print();
}