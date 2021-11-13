//! Co-ordinate movements

#include<iostream>
using namespace std;

int main()
{
    int x = 0, y = 0;
    cout << "Enter a choice: ";
    char move;
    cin >> move;
    switch (move)
    {
    case 'L':
        x--;
        break;

    case 'R':
        x++;
        break;
    
    case 'U':
        y++;
        break;
    
    case 'D':
        y--;
        break;

    default:
        cout << "Invalid Choice";
        break;
    }
    cout << x << " " << y;
}