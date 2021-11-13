#include <iostream>
using namespace std;

//! Abstraction is the process of hiding sensitive data and we dont want to tell the users of this class these details.
// Data Abstraction is the property by virtue of which only the essential details are displayed to the user. The trivial or the non-essentials units are not displayed to the user.
//! Encapsulation is the process of creating a class with all the members and the functions.

class Complex
{
private:
    int real;
    int imag;

public:
    void print()
    {
        cout << real << "+ i" << imag << endl;
    }
    Complex(int r, int i) // called constructor
    {
        real = r;
        imag = i;
    }
};

int main()
{
    Complex C1(10, 15);
    C1.print();
    return 0;
}