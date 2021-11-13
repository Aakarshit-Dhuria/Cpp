//! as the default constructor is not a good option as it does shallow copy we declare a copy constructor to do deep copy.

// whenever we have dynamic memory allocation in a class using pointers, its always a good idea to write our own copy constructor and use deep copy instead of shallow copy.
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
    // here we have to always pass by reference because if we dont use reference it will try to make a copy of the object and call the copy constructor and non-terminating recursion will take place.
    // we use const because we dont want to change the passed object we only want to change the new object.
    Test(const Test &t){
        int val = *(t.ptr);
        // we assign the value at the address of the passed pointer to the variable val.
        ptr = new int(val);
        // then we create a new dynamic memory location 
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
    // as here we are using deep copy, both t1 and t2 point to different memory locations, therefore any changes made to one would not affect the other.
    t1.print();
    t2.print();
}