//! TABLE OF N UPTO M NUMBERS

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cout << n * i << endl;
    }
    return 0;
}