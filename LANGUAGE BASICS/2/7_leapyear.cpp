#include<iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;
    if((year % 4 == 0 and year % 100 != 0) or (year % 400 == 0)){
        cout << "Leap Year";
    }
    else {
        cout << "Not a leap year";
    }
    return 0;
}