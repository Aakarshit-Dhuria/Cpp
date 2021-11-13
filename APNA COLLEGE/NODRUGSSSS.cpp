#include "bits/stdc++.h"
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (t--)
    {
        int N, K, L;
        cin >> N >> K >> L;
        int array[n];
        int maximum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
            if (i == n - 1)
            {
                continue;
            }
            else
            {
                maximum = max(maximum, array[i]);
            }
        }
        if (maximum < array[n - 1] || (((l - 1) * k + array[n - 1]) > maximum))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}