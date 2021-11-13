// Sum of elements in an array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[n];
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum;
    return 0;
}