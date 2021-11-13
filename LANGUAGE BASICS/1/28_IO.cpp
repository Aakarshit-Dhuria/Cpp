// IO MANIPULATION
// 1. setw(n)
// 2. setfill(c)
// 3. std::left
// 4. std::right

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a = 12;
    cout << std::setw(5);  //! setw(n) has to written everytime
                           //! we have to use it.
    //! whereas setfill,left,right , etc. have to be written only once
    cout << std::setfill('*');
    cout << a << "\n";
    cout << std::setw(5);
    cout << "Hii"<< "\n";
    cout << std::left;
    cout << std::setw(5);
    cout << a << "\n";
}