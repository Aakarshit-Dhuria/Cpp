//// Dynamic Programming (Tabulation)
//// Memoisation was top down because we were starting from n and checking for n-1 and n-2 if they were present or not // In Tabulation it is botton up which mean we calculate the base values and start finding the values of the array upto n
//// Dimension of Array - Number of changing parameters
//// Size of Array - Range of these parameters

//// Tabulation based solutions are faster than memoization becuase memoization has so many recursive function calls which causes recursion call overhead. but memoization is easier.
#include <iostream>
using namespace std;

//// Time - theta(n)
//// Aux Space - theta(n)
int fib(int n)
{
    int f[n + 1];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}

int main()
{
    int n = 5;
    cout << fib(n);
    return 0;
}