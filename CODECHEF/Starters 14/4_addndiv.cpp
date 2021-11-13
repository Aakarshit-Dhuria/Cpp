#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x = 0;
        ll a, b;
        cin >> a >> b;
        if (lcm(a, b) < (a * b))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        // if (gcd(a, b) > 1)
        // {
        //     cout << "Yes" << endl;
        // }
        // else
        // {
        //     cout << "No" << endl;
        // }
    }
    return 0;
}