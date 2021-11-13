// fRIEND FUNCTION
// any class can specify another class or function as its friend
// then the friend function or class can access all the private members and protected members of the class.
// it is considered against encapsulation and standard object oriented programming because we are allowing access of private members which shouldnt happen ideally
// most languages like java dont allow this.

#include <iostream>
using namespace std;

class Employee;
class Printer
{
public:
    void printEmp(const Employee &e);
};

class Employee
{
private:
    int id;
    string name;

public:
    friend void Printer::printEmp(const Employee &e);

    Employee(int i, string n) : id(i), name(n) {}
};
void Printer::printEmp(const Employee &e)
{
    cout << e.id << " " << e.name << " ";
}
int main()
{
    Printer p;
    Employee e(101, "ABC");
    p.printEmp(e);
    return 0;
}