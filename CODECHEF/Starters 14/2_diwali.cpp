#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll p, a, b, c, x, y;
        cin >> p >> a >> b >> c >> x >> y;
        ll atotal = (x * a) + b;
        ll ctotal = (y * a) + c;
        if (atotal <= ctotal)
        {
            cout << (p / atotal) << endl;
        }
        else
        {
            cout << (p / ctotal) << endl;
        }
    }

    return 0;
}