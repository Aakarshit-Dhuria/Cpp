Fake Swaps Solution

#include <bits/stdc++.h>
    using namespace std;

#define ll long long
#define endl '\n'

signed main()
{

    int tc = 0, tt = 1;
    cin >> tt;
    while (tc++ < tt)
    {

        ll n;
        cin >> n;

        string s, t;
        cin >> s >> t;

        bool is_same = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i])
            {
                is_same = false;
                break;
            }
        }

        if (is_same)
        {
            cout << "YES" << endl;
            continue;
        }

        ll cc0 = 0, cc1 = 0;
        for (auto x : t)
        {
            if (x == '1')
            {
                cc1++;
            }
            else
            {
                cc0++;
            }
        }

        if (cc1 > 0 and cc0 > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}