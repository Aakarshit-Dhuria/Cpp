#include<iostream>
using namespace std;

int main()
{
    int n = 15;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << sum << "\n";
    cout << n * (n + 1) / 2;  //! More efficient
}