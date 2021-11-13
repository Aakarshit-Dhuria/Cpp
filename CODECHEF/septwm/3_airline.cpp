#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;

        if (a + b <= d and c <= e)
        {
            cout << "YES" << endl;
        }
        else if (a + c <= d and b <= e)
        {
            cout << "YES" << endl;
        }
        else if (b + c <= d and a <= e)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}