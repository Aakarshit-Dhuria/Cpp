// Maximum number of pieces we can cut a rope of length n out of set{a,b,c} which are the given allowed lengths

#include <iostream>
using namespace std;
// time - O(3^n)

int maxCuts(int n, int a, int b, int c)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return -1;
    }
    int res = max(max(maxCuts(n - a, a, b, c), maxCuts(n - b, a, b, c)), maxCuts(n - c, a, b, c));
    if (res == -1)
        return -1;
    return 1 + res;
}
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    cout << maxCuts(n, a, b, c);
    return 0;
}