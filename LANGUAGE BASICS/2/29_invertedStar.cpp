#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1;
    int n;
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        while (j <= n - i)
        {
            cout << " ";
            j++;
        }

        while (j <= n)
        {
            cout << "*";
            j++;
        }
        cout << "\n";
        i++;
    }
}