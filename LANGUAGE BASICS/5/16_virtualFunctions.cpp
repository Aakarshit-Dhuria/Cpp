// Reference : CppNuts(Youtube)
// Virtual functions in C++

// Why to use virtual functions?
// Virtual functions are used to achieve dynamic polymorphism. which is the ability to call Derived class function using Base Class pointer or reference.

// It is called dynamic because we can decide which function to call using virtual keyword therefore this decision is taken at runtime not at compile time.

// How to use virtual function?
// 1. By declaring function as virtual in Base class and overriding that function in Derived class.
// (Function signature should be same in Base and Derived class)
// 2. Declaring a function as virtual in Base class is enough , derived class need not to be declared virtual.(even if inheritance more than once, still the virtual keyword need not be added in the following derived classes it has to only be writtin in the top Base class)
// 3. Virtual Functions should be accessed using pointer(*) or reference of Base class type to achieve run time polymorphism.

// Additional Important Points:
// 1. Virtual functions cannot be static and also cannot be a friend function of another class.
// 2. A class can have virtual destructor but cant have virtual constructor.
// 3. There are two types of virtual functions in C++.
//      a. Virtual Function
//      b. Pure Virtual Function.

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void fun()
    {
        cout << "I am Base fun." << endl;
    }
    // void fun1(){}
    virtual void fun1() = 0;
    // this function is a pure virtual function. pure here means that it doesnt have a body. we have to use this syntax to create a pure virtual function.
    // So when we create a function without a body for some class like base class then this base class becomes abstract class.
    // when we have such a pure virtual function, we cannot instantiate an object of the base class i.e we cannot create an object of class base as it it an abstract class.
    // abstract (class) means that class is not fully constructable because there is some missing information in that.
};

// therefore if we inherit an abstract class and we inherit it into a derived class and the derived class also doesnt have the body of that function then the derived class also becomes abstract.

class Derived : public Base
{
public:
    void fun()
    {
        cout << "I am Derived fun" << endl;
    }

    // Now as we have given the body of the fun1 function in Derived class therefore the derived class is no longer an abstract class but the base class is still an abstract class.
    
    void fun1()
    {
        cout << "fun1" << endl;
    }
};

int main()
{
    // Base *b = new Derived(); // here we are creating a object of base class but it is pointing to derived object.
    // b->fun();
    // when we have not applied virtual keyword this will call the base fun.

    // We can also use reference to do the above code:
    /*
    Derived d;
    Base &b = d;
    b.fun(); 
    */

    // Although we can use b , an object of class Base to call a function fun of derived class using virtual functions, but we still cant use b to call any other function of Derived class like fun1 because even if we assigned an object of type derived to b still it is an object of type base only and cant be used to call fun1.
    // b->fun1(); // is not valid

    // Pure virtual function check:

    Base b1;
    Derived d;
    return 0;
}