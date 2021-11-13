#include<iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    int start = max(m, n);
    int end = m * n;
    int ans = start;

    for (int i = start; i <= end; i++)
    {
        if((i % m == 0) and (i % n==0)){
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}