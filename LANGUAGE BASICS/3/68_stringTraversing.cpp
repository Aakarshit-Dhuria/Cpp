#include <iostream>
using namespace std;

int main()
{
    string str = "Aakarshit";
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i];
        //! modifications can also be done here
    }
    cout << endl;

    //! Traversing using for each loop
    for (char x : str)
    {
        cout << x;
    }
    cout << endl;

    for (auto it = str.begin(); it != str.end(); it++)
    {
        cout << *it;
    }
    return 0;
}