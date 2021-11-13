//! Checking for palindrome
//? Reverse string is equal to original string

#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string rev = "";
    for (int i = str.length()-1; i >= 0; i--)
    {
        rev = rev + str[i];
    }
    if(rev == str){
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    
    return 0;
}