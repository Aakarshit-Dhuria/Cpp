//! 1 - ADDITION , 2 - SUBTRACTION , 3 - MULTIPLICATION

#include<iostream>
using namespace std;

int main()
{
    int op, x, y;
    cin >> op >> x >> y;
    if(op == 1){
        cout << x + y;
    }
    else if(op == 2)
    {
        cout << x - y;
    }
    else if(op == 3)
    {
        cout << x * y;
    }
    else
    {
        cout << "Invalid Input";
    }
    return 0;
}