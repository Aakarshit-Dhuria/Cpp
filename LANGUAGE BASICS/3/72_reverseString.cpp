//! Reversing a string in c++

#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string rev = "";
    for (int i = str.length(); i >= 0; i--)
    {
        rev = rev + str[i];
    }
    cout << rev;
    return 0;
}