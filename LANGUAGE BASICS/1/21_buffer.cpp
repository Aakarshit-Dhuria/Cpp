// If we give the two inputs in the same line using space then the second integer will also be stored in the buffer and when the program automatically takes the second integer  as the other input from the buffer.
#include<iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter first integer: ";
    cin >> x;
    cout << "Enter second integer: "<<endl;
    cin >> y;
    cout << "Multiplication is " << (x * y);
    return 0;
}