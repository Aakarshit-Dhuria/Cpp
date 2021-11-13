//! PASSING STRUCTURE AS ARGUMENT TO FUNCTIONS

#include<iostream>
using namespace std;

struct Point{
    int x;
    int y;
};
// like normal variables, structures are passed to functions by value
void print(Point p){
    cout << p.x << " " << p.y << endl;
    // like normal variables , if we modify the value here, it doesnt affect the original structure.
    p.x = 5;
}

int main(){
    Point p = {10, 20};
    print(p);
    return 0;
}