#include <iostream>
using namespace std;

//! Like classes we can have constructors,destructors,functions in a struct.
struct Point
{
    int x;
    int y;
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void print()
    {
        cout << x << " " << y << "\n";
    }
};

int main()
{
    Point p(10, 20);
    p.print();
    return 0;
}