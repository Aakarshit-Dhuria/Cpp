// Check if an array is sorted

#include <bits/stdc++.h>
using namespace std;

bool check_sorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < (arr[i - 1]))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if(check_sorted(arr, n) == false){
        cout << "Not sorted";
    } 
    else
    {
        cout << "Sorted";
    }
    
    return 0;
}