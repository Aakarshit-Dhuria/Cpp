#include <iostream>
using namespace std;

int main()
{
    string str = "Aakarshit";
    cout << str.length() << endl;
    str = str + "xyz";
    cout << str << endl;
    cout << str.substr(1, 3) << endl;
    //! first argument is the starting index and second argument is the length or number of characters of substring
    cout << str.find("ak") << endl;
    //! gives the index of the substring we have to find
    cout << str.find("aaa");
    return 0;
}