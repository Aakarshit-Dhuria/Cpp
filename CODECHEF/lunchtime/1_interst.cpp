#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a, b;
        if (n % 4 == 0)
        {
            cout << "Yes" << endl;
            for (int i = 1; i <= n / 2; i++)
            {
                if (i % 2 != 0)
                {
                    a.push_back(i);
                }
                else
                {
                    b.push_back(i);
                }
            }
            for (int i = (n / 2) + 1; i <= n; i++)
            {
                if (i % 2 == 0)
                {
                    a.push_back(i);
                }
                else
                {
                    b.push_back(i);
                }
            }
            for (int i = 0; i < a.size(); i++)
            {
                cout << a.at(i) << " ";
            }
            cout << "\n";
            for (int i = 0; i < b.size(); i++)
            {
                cout << b.at(i) << " ";
            }
            cout << "\n";
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}