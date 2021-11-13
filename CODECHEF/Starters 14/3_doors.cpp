#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;
        char current = '1';
        for (auto ch : s)
        {
            if (current == '1' and ch == '1')
            {
                continue;
            }
            if (current == '1' and ch == '0')
            {
                count++;
                current = '0';
            }
            if (current == '0' and ch == '1')
            {
                count++;
                current = '1';
            }
            if (current == '0' and ch == '0')
            {
                continue;
            }
        }
        cout << count << endl;
    }

    return 0;
}