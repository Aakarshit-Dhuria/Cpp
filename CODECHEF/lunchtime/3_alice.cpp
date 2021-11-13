#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool power(ll n)
{
    if (n != 0 and (n & (n - 1)) == 0)
        return true;
    return false;
}

void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> m;
    ll i = 2;
    if (n == 1)
    {
        cout << "Alice" << endl;
        return;
    }
    if (n == 2)
    {
        cout << "Bob" << endl;
        return;
    }
    if (n % 2 == 0)
    {
        if (power(n + 2))
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Alice" << endl;
        }
        return;
    }
    if (n % 2 != 0)
    {
        if (power(n + 1))
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
        return;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}