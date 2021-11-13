#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool prime(int n){
    for (int i = 2; i < n; i++)
    {
        if(n % i == 0){
            return false
        }
    }
    return true;
}

int primefact(int n){
    ll count = 0;
    for (int i = 2; i <= n; i++)
    {
        if(prime(i)){
            if(n % i == 0){
                count++;
            }
        }
    }
    return count;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll pm = primefact(n);
        ll a, b;
        
    }
    
    return 0;
}