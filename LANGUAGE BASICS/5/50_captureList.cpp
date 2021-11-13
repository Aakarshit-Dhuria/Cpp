// Capture list in Lambda Expressions
// 1. []     : Nothing
// 2. [=]    : Everything by value
// 3. [&]    : Everything by reference
// 4. [=,&x] : Everything by value and x by reference
// 5. [&,x]  : Everything by reference and x by value

// Static and global variables are always captured.

// If we pass a variable(s) by value then they are read only we cant change their value inside the lambda expression.
#include <iostream>
using namespace std;

int main()
{
    int x = 5, y = 10;
    // we can use the mutable keyword if we want to make changes to variables passed by value.(but still the changes wont be reflected outside the expression)
    // auto lambda_expr = [=](int a)mutable
    auto lambda_expr = [&](int a)
    {
        x = x + a;
        y = y + a;
    };
    lambda_expr(20);
    cout<<x<<" "<<y<<"\n";
    return 0;
}