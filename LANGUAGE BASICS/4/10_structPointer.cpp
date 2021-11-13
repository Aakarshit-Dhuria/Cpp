//! Structure Pointers

#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};

int main()
{
    Point p = {10, 20};
    Point *ptr = &p;
    // pointer to a structure is created in the same way as normal variables
    cout << ptr->x << " ";
    //! to access the structure members using pointers we have to use arrow operator.
    ptr->x = 30;
    cout << p.x;
    return 0;
}