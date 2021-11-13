// Lambda Expressions in C++
// Sorting Arrays by absolute values\
// Advantage of Lambda expression: we donot have to create a seperate function.(particularly for small functions)
// ALso known as anonymous functions.
// local variables of main function cant be accessed in lambda expressions.
// it can only access the parameters passed to the original function.
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {-20, 10, -30, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n, [](int a, int b)
         { return abs(a) < abs(b); });
    // if we want to access local variables of main in lambda then we can pass all those variable by value or reference to lambda by writing it inside capture list e.g. [x] or [&x]
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}