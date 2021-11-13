//! DEFAULT ARGUMENTS IN FUNCTIONS
//! 1. Default Arguments only appear at the end.
//! 2. Default Arguments values can be provided either in declaration or in definition(error if in both), preferably provided in function definition(prototype).

#include<bits\stdc++.h>
using namespace std;

void printDetails(int id,string name = "NA",string address = "NA")
{
    cout << "ID is " << id << endl;
    cout << "Name is " << name << endl;
    cout << "Address is " << address << endl;
}

int main()
{
    printDetails(101, "Sandeep", "Noida");
    cout << "\n";
    printDetails(201, "Shivam");
    cout << "\n";
    printDetails(301);
    return 0;
}