// ! Reading a string with spaces.

#include<iostream>
using namespace std;

int main(){
    string name;
    cout << "Enter your name : ";
    // cin >> name; //! it takes only the first word not the last name after spaces.
    //! therefore to input the complete line with spaces we use getline
    getline(cin, name);
    //! we can also specify where to stop in the third argument of this getline function.
    // getline(cin, name, $); this will stop the input as soon as the given character is encountered
    cout << "Your name is " << name;
}