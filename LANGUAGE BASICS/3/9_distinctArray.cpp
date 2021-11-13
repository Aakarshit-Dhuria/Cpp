// Count the distinct elements in an array

#include <bits/stdc++.h>
using namespace std;

int count_distinct(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            count += 1;
    }
    return count;
}

int main()
{
    int n, arr[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << count_distinct(arr, n);
    return 0;
}