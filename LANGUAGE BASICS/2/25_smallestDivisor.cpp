//! Smallest divisor of n other than 1.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "Smallest Divisor is " << i;
            break;
        }
    }
    return 0;
}