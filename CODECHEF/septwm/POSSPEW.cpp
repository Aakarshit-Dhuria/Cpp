#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        
        int v[n];
        int temp[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            
        }
        for (int j = 0; j < k; j++)
        {
            copy(v, v + n, temp);
            for (int i = 0; i < n; i++)
            {
                if (i != 0 and i != n - 1)
                {
                    if (v[i] > 0)
                    {
                        temp[i - 1] = temp[i - 1] + 1;
                        temp[i + 1] = temp[i + 1] + 1;
                    }
                }
                else if (i == 0)
                {
                    if (v[0] > 0)
                    {
                        temp[1] = temp[1] + 1;
                        temp[n - 1] = temp[n - 1] + 1;
                    }
                }
                else if (i == n - 1)
                {
                    if (v[n - 1] > 0)
                    {
                        temp[n - 2] = temp[n - 2] + 1;
                        temp[0] = temp[0] + 1;
                    }
                }
            }
            copy(temp, temp + n, v);
        }

        int sum = accumulate(v, v + n, 0);
        cout << sum << endl;
    }
    return 0;
}
