#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {-20, 10, -30, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    auto myLmb = [](int a, int b)
    { return abs(a) < abs(b); };
    // instead of passing the lambda expression directly into the function we can create a variable to store the lambda expression
    sort(arr, arr + n, myLmb);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}