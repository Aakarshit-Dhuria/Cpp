#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    string address;
};

int main()
{
    Student s = {101, "ABC", "XYZ"};
    //! we can also declare a structure object like above but we have to take care of the order of variables.
    cout << s.rollNo << " "
        << s.name << " "
        << s.address;
    return 0;
}