#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point() // Default Constructor
    {
        x = 0;
        y = 0;
    }
    Point(int x1, int y1) // Parameterized Constructor
    {
        x = x1;
        y = y1;
    }
    void print()
    {
        cout << "Value of x is: " << x << endl
            << "Value of y is: " << y << endl;
    }
};

int main()
{
    Point p1;
    Point p2(10, 20);
    p1.print();
    p2.print();
    return 0;
}