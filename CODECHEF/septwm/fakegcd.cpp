

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, num;
        cin >> num;
        for (i = 1; i <= num; i++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
