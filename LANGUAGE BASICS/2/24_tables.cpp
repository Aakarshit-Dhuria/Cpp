//! Tables of first n positive integers
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << j * i << " ";
        }
        cout << "\n";
    }
    return 0;
}