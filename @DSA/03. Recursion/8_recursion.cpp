// Natural no. sum using recursion

#include <iostream>
using namespace std;
// time-theta(n) // T(n) = T(n-1) + theta(1)
// aux space - theta(n) 
int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}

// tail recusive solution
int tailSum(int n, int k)
{
    if (n == 0)
        return 0;
    return (n - 1, k + n);
}

int main()
{
    int n;
    cin >> n;
    int k = 1;
    cout << sum(n) << endl;
    cout << tailSum(n, k);
    return 0;
}