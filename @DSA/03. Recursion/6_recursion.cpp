// print n to 1 using recursion
#include <iostream>
using namespace std;
// time - theta(n)  // aux space -  theta(n)
void printNto1(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    printNto1(n - 1);
}

int main()
{
    int n;
    cin >> n;
    printNto1(n);
    return 0;
}