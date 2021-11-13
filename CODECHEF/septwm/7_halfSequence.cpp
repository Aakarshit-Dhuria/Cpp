#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    num = ceil(n);
    int even = 0, odd = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] % 2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    
    for (int i = 0; i < num; i++)
    {
        if(even > num){
            gcd
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--){
    solve();
    }
    return 0;
}