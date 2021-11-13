#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x=0;
        cin >> n;
        int A[n];
        int B[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        int eveni = n / 2;
        int oddi = n / 2 + n % 2;
        int evena = 0, odda = 0;
        for (int i = 0; i < n; i++)
        {
            if (A[i] % 2 == 0)
            {
                evena++;
            }
            else
            {
                odda++;
            }
        }

        if ((evena - oddi) > 0)
        {
            x = evena - oddi;
        }
        if((odda-eveni) > 0){
            x = odda - eveni;
        }
        cout << (n - x) << endl;
    }
}