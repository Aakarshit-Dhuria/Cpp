// print 1 to n using recursion

#include <iostream>
using namespace std;
// time - theta(n)  // aux space = theta(n)
void fun(int n)
{
    if (n == 0)
    {
        return;
    }
    fun(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    fun(n);
    return 0;
}