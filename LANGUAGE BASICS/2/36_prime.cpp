#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool prime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            cout << "No";
            break;
        }
    }
    if (prime)
    {
        cout << "Yes";
    }
    return 0;
}