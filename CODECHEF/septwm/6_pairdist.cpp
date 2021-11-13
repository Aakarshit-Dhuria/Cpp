#include <bits/stdc++.h>
using namespace std;

#define ll long long

void pairDist()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n > 4)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
    {
        if (i % 4 == 0)
        {
            cout << arr[i] << " 0\n";
        }
        else if (i % 4 == 1)
        {
            cout << "0 " << arr[i] << "\n";
        }
        else if (i % 4 == 2)
        {
            cout << -arr[i] << " 0\n";
        }
        else
        {
            cout << "0 " << -arr[i] << "\n";
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        pairDist();
    }
    return 0;
}