#include "bits/stdc++.h"
#define ll long long
using namespace std;
int main()
{
    ll t, n, k, l, i, j;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vector<pair<ll, ll>> v(n);
        ll x = k / 2;
        x++;
        for (i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
        }
        sort(v.begin(), v.end(), greater<>());
        vector<ll> ansss(n);
        for (i = 0; i < x - 1; i++)
        {
            ll p = v[i].second;
            ll ele = v[i].first;
            ansss[p] = ele;
        }
        ll p = v[x - 1].second;
        ll ele = v[x - 1].first;
        ansss[p] = ele;
        for (i = x; i < k; i++)
        {
            ll p = v[i].second;
            ll ele = v[i].first;
            ansss[p] = ele;
        }
        cout << v[x - 1].first << "\n";
        for (i = 0; i < n; i++)
        {
            if (ansss[i] != 0)
                cout << ansss[i] << " ";
        }
        cout << "\n";
    }
}