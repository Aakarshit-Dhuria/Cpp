// Program to add only positive numbers.
#include <iostream>
using namespace std;

int main()
{
    int number;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    while (number >= 0)
    {
        sum = sum + number;
        cout << "Enter a number: ";
        cin >> number;
    }
    cout << "\nThe sum is " << sum << endl;
}