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
        // t1 and t2 < n
        // t1 + t2 = s
        // max(t1-t2)
        int t1, t2;
        if (s > n)
        {
            t1 = s - n;
            t2 = n;
        }
        else
        {
            t1 = 0;
            t2 = n;
        }
        while (t1 + t2 > s)
        {
            t2--;
        }
        cout << t2 - t1 << endl;
    }
    return 0;
}