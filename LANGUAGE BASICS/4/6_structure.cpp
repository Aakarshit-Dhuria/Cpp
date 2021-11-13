#include<iostream>
using namespace std;
//! by default, structure members are public and can be made private using same method as classes

struct Point
{
    int x;
    int y;
};


int main(){
    Point p;
    p.x = 10;
    cout << p.x;
    return 0;
}