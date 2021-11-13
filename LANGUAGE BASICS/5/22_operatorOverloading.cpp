// Operator overloading
// we can write a function to define how an operator works on our own class.
// here we are creating a function for operator overloading in a class, we can also create a global function for operator overloading for two classes it will also work the same. i.e Operator overloading can be done either by making a member function or by making a global function.

// The standard default assignment operator created by the compiler does shallow copy.
// Note: if our class has constructor which has pointers and dynamic allocation of memory then we have do operator overloading for the assignment operator like we did in case of copy constructor to do a deep copy here also.

// Therefore whenever we have dynamic allocation of memory and pointers refering to this memory then we should always write a:
// i. Destructor (to make sure there is no memory leak)
// ii. Copy Constructor (to make sure shallow copy doesn't happen and deep copy takes place)
// iii. Assignment operator (overloading)(same reason as copy constructor)
// Reason for not doing shallow copy: when we do shallow copy of two objects, any changes made in one object will also be reflected in the other object.
#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        // cout << "Hello" << endl;
        return res;
    }
    void print() { cout << real << " + i" << imag << endl; }
};

int main()
{
    Complex C1(10, 5), C2(2, 4);
    Complex C3 = C1 + C2;
    C3.print();
    return 0;
}