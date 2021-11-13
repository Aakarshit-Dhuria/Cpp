#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        ll count = 0;
        cin >> l >> r;
        for (int i = 0; i < 3; i++)
        {
            if (l > r)
            {
                return 0;
            }
            if (l <= r and (l % 3) == 0)
                break;
            else
            {
                l++;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if ((l <= r) and ((r % 3) == 0))
            {
                break;
            }
            else
            {
                r--;
            }
        }
        ll a = (l / 3);
        ll b = (r / 3);
        cout << ((abs(a-b)) + 1) << endl;
    }
    return 0;
}