// A base class type reference or pointer can refer to a derived class object
#include<iostream>
using namespace std;

class Base
{
public:
    virtual void print() { cout << "Base" << endl; }
};
class Derived : public Base
{
public:
    void print() { cout << "Derived" << endl; }
    // Function overriding 
    // when we have a function of same name in a derived class and with the same signature and when base class function is virtual.
    // the function to be called in this is decided at run time therefore it is also known as runtime polymorphism.
};

int main()
{
    // Base *b = new Derived d;
    // // here we
    // Derived d;
    // Base &b = d;
    Base b;
    Derived d;
    b.print();
    d.print();
    Base *ptr = &d;
    ptr->print();
    // this will print base as ptr is an object of base class only
    // to make this object call the function of the class it is pointing to we use the virtual keyword

    return 0;
}