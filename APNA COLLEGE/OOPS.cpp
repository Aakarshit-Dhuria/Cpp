#include <bits/stdc++.h>
using namespace std;

class student
{
    string name;

public:
    int age;
    bool gender;

    student()
    {
        cout << "Default Constructor" << endl;
    }

    student(string s, int a, bool g)
    {
        cout << "Parameterised Constructor\n";
        name = s;
        age = a;
        gender = g;
    } // Parameterised constructor

    student(student &a)
    {
        cout << "Copy Constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~student(){
        cout << "Destructor Called." << endl;
    }

    void print_info()
    {
        cout << "Name = ";
        cout << name << endl;
        cout << "Age = " << age << endl;
        cout << "Gender = " << gender << endl;
    }

    //! Operator Overloading
    bool operator == (student &a){
        if(name == a.name && age == a.age && gender  == a.gender){
            return true;
        }
        return false;
    }

    void setName(string s)
    {
        name = s;
    }

    void getName()
    {
        cout << name << endl;
    }
};

int main()
{
    //! student a;
    //! a.name = "Aakarshit";
    //! a.age = 19;
    //! a.gender = 0;
    //! a.print_info();

    // student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     string s;
    //     cout << "Enter Name = ";
    //     // cin >> arr[i].name;
    //     cin>>s;
    //     //! arr[i].setName(s);
    //     cout << "Enter Age = ";
    //     cin >> arr[i].age;
    //     cout << "Enter Gender = ";
    //     cin >> arr[i].gender;
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].print_info();
    // }
    // // !arr[0].getName();t

    student a("aakarshit", 19, 0);
    // a.getName();
    // a.print_info();
    student b;
    // student c(a); //! another way of below
    student c = a;

    if(c == a){
        cout << "Same"<<endl;
    }else{
        cout << "Not same"<<endl;
    }
    return 0;
}