#include <iostream>
using namespace std;

void toh(int n, char A, char B, char C)
{
    if (n == 1)
    {
        cout << "Move 1 from " << A << " to " << C << endl;
        return;
    }
    toh(n - 1, A, C, B);
    cout << "Move " << n << " from " << A <<" to " << C << endl;
    toh(n - 1, B, A, C);
}

int main()
{
    toh(3, 'A', 'B', 'C');
    return 0;
}