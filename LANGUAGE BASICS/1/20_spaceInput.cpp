// getline() is used to read strings with spaces

#include<iostream>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Welcome, " << name;
    return 0;
}