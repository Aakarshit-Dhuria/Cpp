#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p, x, y;
        cin >> n >> p >> x >> y;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int zCount = 0, oCount = 0;
        for (int i = 0; i < p; i++)
        {
            if (arr[i] == 0)
            {
                zCount++;
            }
            else
            {
                oCount++;
            }
        }
        int total = (zCount * x) + (oCount * y);
        cout << total << endl;
    }

    return 0;
}