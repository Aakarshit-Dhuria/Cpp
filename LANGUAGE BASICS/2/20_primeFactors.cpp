#include <bits/stdc++.h>
using namespace std;

int isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void primeFactors(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            int x = i;
            while (n % x == 0)
            {
                cout << i << "\n";
                x = x * i;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    primeFactors(n);
    return 0;
}