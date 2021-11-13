#include <iostream>
using namespace std;

class Point
{
    // public:
    int x;
    int y;
};
//! this will give compiler error because by default classes have private variables which we cant access outside the class
int main()
{
    Point p;
    p.x = 10;
    cout << p.x;
    return 0;
}