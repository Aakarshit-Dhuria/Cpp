#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20, c = 30;
    if (c > b > a)  
    //! Associativity from left to right
    //! (c > b) > a  -->  1 > a which is false (1  because c > b)
    {
        cout << "Y";
    }
    else
    {
        cout << "N";
    }
    return 0;
}