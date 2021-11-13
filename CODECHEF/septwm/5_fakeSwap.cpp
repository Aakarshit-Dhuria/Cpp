#include <bits/stdc++.h>
using namespace std;

#define long long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;

        string s, p;
        cin >> s >> p;

        bool same = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != p[i])
            {
                same = false;
                break;
            }
        }
        if (same)
        {
            cout << "YES" << endl;
            continue;
        }

        long oneCount = 0, zeroCount = 0;
        for (auto x : p)
        {
            if (x == '1')
            {
                oneCount++;
            }
            else
            {
                zeroCount++;
            }
        }
        if (oneCount > 0 and zeroCount > 0)
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