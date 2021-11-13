#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int zeroC = count(s.begin(), s.end(), '0');
        int oneC = count(s.begin(), s.end(), '1');
        int total = (a * zeroC) + (b * oneC);
        cout << total;
    }
}