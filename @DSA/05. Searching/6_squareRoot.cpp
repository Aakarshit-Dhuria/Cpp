// Square root
#include <iostream>
using namespace std;

// naive solution
// time - theta(√x)
int squareRoot(int x)
{
    int i = 1;
    while (i * i <= x)
    {
        i++;
    }
    return i;
}

int sqroot(int x)
{
    int low = 0, high = x, ans = -1;
    int mid = (low + high) / 2;
    while (low <= high)
    {
        if (mid * mid == x)
        {
            return mid;
        }
        if (mid * mid < x)
        {
            low = mid + 1;
            ans = mid;
        }
        if (mid * mid > x)
        {
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{

    return 0;
}