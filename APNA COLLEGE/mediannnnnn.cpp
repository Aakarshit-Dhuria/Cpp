#include "bits/stdc++.h"
#define ll long long
using namespace std;
int main()
{
    ll T, N, K, L;
    cin >> T;
    while (T--)
    {
        cin >> N >> K;
        vector<pair<ll, ll>> v(N);
        ll x = K / 2;
        x++;
        for (int i = 0; i < N; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
        }
        sort(v.begin(), v.end(), greater<>());
        vector<ll> median(n);
        for (int i = 0; i < x - 1; i++)
        {
            ll p = v[i].second;
            ll ele = v[i].first;
            median[p] = ele;
        }
        ll p = v[x - 1].second;
        ll ele = v[x - 1].first;
        median[p] = ele;
        for (int i = x; i < K; i++)
        {
            ll p = v[i].second;
            ll ele = v[i].first;
            median[p] = ele;
        }
        cout << v[x - 1].first << "\n";
        for (i = 0; i < N; i++)
        {
            if (median[i] != 0)
                cout << median[i] << " ";
        }
        cout << "\n";
    }
}