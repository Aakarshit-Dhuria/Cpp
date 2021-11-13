#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pos = "North";
        int x;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            if (pos == "North")
            {
                pos = "East";
            }
            else if (pos == "East")
            {
                pos = "South";
            }
            else if (pos == "South")
            {
                pos = "West";
            }
            else if (pos == "West")
            {
                pos = "North";
            }
        }
        cout << pos << endl;
    }
    return 0;
}