#include <iostream>
using namespace std;

void func(int x, int y, int z)
{
    cout << x << " " << y << " " << z;
}

int main()
{
    int i = 2;
    func(++i, ++i, ++i);
    //! COMPILER DEPENDENT
    return 0;
}