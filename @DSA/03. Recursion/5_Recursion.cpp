#include <iostream>
using namespace std;

void fun(int n)
{
    if (n == 0)
    {
        return;
    }
    fun(n / 2);
    cout << (n % 2);
}
// this recursive function prints the binary equivalent of n
int main()
{
    fun(10);
    return 0;
}