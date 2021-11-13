//! Structure to functions using reference
//! 1. for large structures with long strings , it saves times by avoiding making a copy of the structure.
// ! 2. Modifications to the structure can be done inside  the function also

#include<iostream>
using namespace std;

struct Student{
    int rollNo;
    string Name;
    string address;
    int age;
    string section;
};
// to only save time of copying and avoiding accidental modifications , we can use the const keyword.
void print(const Student &x){
    cout << x.rollNo << " "
        << x.name << " "
        << x.address << " "
        << x.age << " "
        << x.section << endl;
}

//! PAssing using Pointers(same advantages)
void print(const Student *x){
    cout << x->rollNo << " "
        << x->name << " "
        << x->address << " "
        << x->age << " "
        << x->section << endl;
}