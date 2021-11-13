//! UNION
//! IN THIS, all the variables are stored in the same memory location and its size is equal to size of the largest variable.

#include <iostream>
using namespace std;

union Test
{
    int x;
    int y;
};

int main()
{
    Test t;
    t.x = 10;
    // as x and y are stored in the same memory location, therefore value assigned to x is also assigned to y.
    cout << t.x << " " << t.y << endl;
    t.y = 20;
    cout << t.x << " " << t.y << endl;
    cout << sizeof(t);
    return 0;
}