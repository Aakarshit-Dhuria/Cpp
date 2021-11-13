#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    int marks;

public:
    static int studentCount;
    Student()
    {
        studentCount++;
    }

    void getdata()
    {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void printData()
    {
        cout << "Roll number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << endl;
    }
};

int Student::studentCount;

int main()
{
    Student s1;
    s1.getdata();
    s1.printData();

    Student s2;
    s2.getdata();
    s2.printData();

    cout << "Total students: " << Student::studentCount << endl;
}