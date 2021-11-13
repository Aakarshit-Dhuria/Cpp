// Print all numbers smaller than or equal to n that are not multiple of x

#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        if (i % x == 0)
        {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}