// Inheritance
// Inherited classes are also called sub-classes.
// BAse class is also called super class.
// protected access specifier allows access inside the class and in inherited class
// when an object of inherited class is made, first the members and constructors of the base class are called and then of the actual inherited class.

#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int id;
};
// here public is called access specifier
class Student : public Person
{
private:
    int marks;

public:
    void print()
    {
        cout << name << " " << id << " " << marks << endl;
    }
};

int
main()
{

}