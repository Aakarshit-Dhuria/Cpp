#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollno;
    void getData();
    void printData();
};

void Student::getData()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter Roll No.: ";
    cin >> rollno;
}

void Student::printData()
{
    cout << "Name of Student is " << name << endl;
    cout << "Roll No of Student is " << rollno << endl;
}

int main()
{
    Student s;
    s.getData();
    s.printData();
    return 0;
}