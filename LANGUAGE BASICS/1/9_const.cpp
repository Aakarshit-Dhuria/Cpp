#include<iostream>
using namespace std;

const double PI = 3.14;
// variable declared using const keyword cannot be changed using arithmetic or any other operations
// although their value can be changed using pointers but it's not recommended.
int main()
{
    int r;
    cout << "Enter the radius: ";
    cin >> r;
    cout << "The area of the circle is " << (PI * r * r);
    return 0;
}