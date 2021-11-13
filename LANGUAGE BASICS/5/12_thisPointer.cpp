// every object of a class has its own copy of data members and variables but the same function code.
// this pointer refers to the object through which we are calling the function.

// Advantages of this pointer:
// 1. we can have same names for parameters of functions.
// 2. chaining of functions.

#include<iostream>
using namespace std;

class Point{
    int x, y;
    public:
    // Point(int x1,int y1){
    //     x = x1; // internally this is represented as this->x = x1;
    //     y = y1; // this as this->y = y1;
    // }
    Point (int x,int y){
        this->x = x;
        this->y = y;
    }
    Point &setX(int x){
        // we are getting the return value as reference here so that it returns the same object and returns a pointer for the next function call.
        this->x = x;
        return *this;
    }
    Point &setY(int y){
        this->y = y;
        return *this;
    }
    // this chaining of function is similar to what happens in cout.
    // the insertion operator is actually a function call that prints something and then again returns a reference to the ostream object.
};

int main(){
    Point p1(10, 20), p2(5, 5);
    p1.setX(5).setY(5); // Chaining of functions.
    // we can do this if setX returns an object of type point only and this object has to be the same object so here a this poimter is  used.
    return 0;
}