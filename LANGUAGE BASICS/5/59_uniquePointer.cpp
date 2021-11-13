// Unique Pointer (all the three smart pointers are available in memory library of c++)

#include <iostream>
#include <memory>
using namespace std;

class Test
{
    int x;

public:
    Test(int a = 0)
    {
        x = a;
        cout << "Constructor Called..!!\n";
    }
    ~Test() { cout << "Destructor Called..!!\n"; }
    void fun() { cout << x << endl; }
};

int main()
{
    cout << "Main Begins..!!\n";
    {
        unique_ptr<Test> ptr = make_unique<Test>(10); //recommended
        // unique_ptr<Test> ptr(new Test(10));
        ptr->fun(); //as unique_ptr is also a type of pointer we use arrow operator(can also use dereferencing)
        // unique_ptr<Test>ptr2 = ptr // this will give compilor error because assignment operator and copy constructor are not allowed to be used in unique pointers.
        // unique_ptr<Test> &ptr2 = ptr; // we can still create a new pointer using reference because it is just another pointer pointing to the same address.
        // ptr2->fun();

        // we can use move ownership of one pointer to another pointer
        unique_ptr<Test> ptr2 = move(ptr1);
    }
    cout << "Main Ends..!!\n";
    return 0;
}