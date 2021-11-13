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
        int arr[n + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            arr[i] = i;
        }
        int lcount = 0;
        int rcount = accumulate(arr, arr + n, 0);
        int i = 0;
        while (lcount != rcount)
        {
            lcount = lcount + arr[i];
            rcount = rcount - arr[i];
            i++;
            if (lcount = rcount)
            {
                cout << i + 1;
            }
            else if (lcount > rcount)
            {
                cout << -1;
                break;
            }
        }
    }

    return 0;
}