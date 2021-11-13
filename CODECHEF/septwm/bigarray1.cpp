#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int diff = n * (n + 1) / 2;
        diff = diff - s;
        if (diff >= 1 and diff <= n)
        {
            cout << diff << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        return 0;
    }
}