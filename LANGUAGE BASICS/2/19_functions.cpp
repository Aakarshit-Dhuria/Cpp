#include <bits/stdc++.h>
using namespace std;

void fun(int x)
{
    if (x == 0)
    {
        return; //! return can be used alone like this when return type is void
    }
    else
    {
        cout << "GFG\n";
        fun(x - 1);
    }
}
int main()
{
    fun(3);
    return 0;
}