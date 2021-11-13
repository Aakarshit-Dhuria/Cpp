// No of ways of going up n stairs can be found using fibonnaci series

#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long a = 1;
    long long b = 1;
    long long c = 0;
    cout << "1 1 ";
    for (long long i = 2; i <= n; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}