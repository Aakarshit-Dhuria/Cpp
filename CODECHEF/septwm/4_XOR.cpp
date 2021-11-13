#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i] ^ x;
        }
        // int maxC = count(arr, arr + n, arr[0]), maxi = arr[0];
        int maxC = 0, maxi = 0;
        for (int i = 0; i < n; i++)
        {
            if ((count(arr, arr + n, arr[i])) > maxC)
            {
                maxC = count(arr, arr + n, arr[i]);
                maxi = arr[i];
            }
        }
        cout << maxC << endl;
    }
    return 0;
}