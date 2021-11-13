#include<iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int mini = min(10, 15);
    int ans = 1;
    for (int i = 1; i <= mini; i++)
    {
        if((m % i == 0) and (n % i == 0)){
            ans = i;
        }
    }
    cout << ans;
    return 0;
}