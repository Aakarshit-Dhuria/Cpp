#include<iostream>
using namespace std;
#define PI 3.14
// here pi is defined using the preproccesor #
// it also works as a constant
// but there are 2 disadvantages:
// 1. we can't do typechanging in this case from double to int for example
// 2. using const, the variable has a scope like other variables but this is defined for whole program

int main()
{
    int r;
    cout << "Enter radius: ";
    cin >> r;
    cout << "Area is " << (PI * r * r);
    return 0;
}