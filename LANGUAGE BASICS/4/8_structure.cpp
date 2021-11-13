//! Structure and class differ in inheritance also. Default for derived class of struct is public and for class is private.

#include<iostream>
using namespace std;

class Base{
    public:
        int x;
};
class Derived : Base{
};
//! as we didnt specify public while inheriting base class to derived class so variable x is not inherited into derived class therefore the following program will give compiler error
int main(){
    Derived d;
    d.x = 20; // compiler error
    return 0;
}