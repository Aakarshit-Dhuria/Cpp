#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        ll count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n-1; i++)
        {
            
            for (int j = i + 1; j < n; j++)
            {
                if ((arr[i] * arr[j]) % ((i+1) * (j+1)) == 0)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}