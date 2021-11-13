// Exception class in C++
// standard library exceptions

// All standard library exceptions like bad.alloc,bad.cast,etc. inherit from exception class directly or indirectly.

#include <iostream>
#include <exception>
using namespace std;

class myException : public exception
{
    virtual const char *what() const throw() 
    // virtual function // return const char* (meaning string) // what (name of function) // const (means it is a const function) // throw() (empty because it doesnt throw any exception)
    {
        return "Exception Occured\n";
    }
};

int main()
{
    try
    {
        throw myException();
    }
    catch (exception &e)
    // we have used exception reference here as what is a virtual function in exception class
    // if we would have written myException &e that would also work 
    // as we generally use base class reference  and call a virtual function ,the function of derived class is called
    {
        cout << e.what();
    }
    return 0;
}