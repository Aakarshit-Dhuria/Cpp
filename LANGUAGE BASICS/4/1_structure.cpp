#include<iostream>
using namespace std;

struct Point{
    int x;
    int y;
};

int main(){
    //struct point p;
    //! writing this struct keyword here is optional.
    Point p;
    p.x = 10;
    p.y = 20;
    cout << p.x << " " << p.y;
    return 0;
}