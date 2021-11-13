#include <bits/stdc++.h>
using namespace std;

#define long long long
void farthestBlock();
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        farthestBlock();
    }
    return 0;
}
void farthestBlock()
{
    long n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int count = 0;
    char result = s[0];

    for (int i = 1; i < n; i++)
    {
        if (result != s[i])
        {
            count++;
            result = s[i];
        }
    }
    if (count < k)
    {
        cout << -1 << endl;
        return;
    }
    if (s[0] == '0')
    {
        if (k % 2)
        {
            for (int i = s.size() - 1; i >= 0; i--)
            {
                if (s[i] == '1')
                {
                    cout << i + 1 << endl;
                    return;
                }
            }
        }
        else
        {
            for (int i = s.size() - 1; i >= 0; i--)
            {
                if (s[i] == '0')
                {
                    cout << i + 1 << endl;
                    return;
                }
            }
        }
    }
    else
    {
        if (k % 2)
        {
            for (int i = s.size() - 1; i >= 0; i--)
            {
                if (s[i] == '0')
                {
                    cout << i + 1 << endl;
                    return;
                }
            }
        }
        else
        {
            for (int i = s.size() - 1; i >= 0; i--)
            {
                if (s[i] == '1')
                {
                    cout << i + 1 << endl;
                    return;
                }
            }
        }
    }
}