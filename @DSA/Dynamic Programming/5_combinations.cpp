//// Coin Change (Count Combinations)

#include <iostream>
using namespace std;
// we start from the last element, we either include it or we don't. if we include it, we decrease sum by its value and if we dont include it we decrease the array size, n by 1.
int getCount(int coins[], int n, int sum)
{
    if (sum == 0)
        return 1;
    if (n == 0)
        return 0;

    int res = getCount(coins, n - 1, sum);
    if (coins[n - 1] <= sum)
    {
        res = getCount(coins, n, sum - coins[n - 1]);
    }

    return res;
}

//// DP Solution  // Time - theta(sum * n)   // Aux Space - theta(sum * n)  // we can optimise this solution more to make it theta(sum).
// 1. first create an array with the paramaters which are changing // here 2 parameters are changing , n and sum
// Now create an array of size n+1 and sum + 1 i.e. dp[sum+1][n+1]
// dp[i][j] is number of combinations we can get with sum i and coins from i to j.
// Now start considering base cases:
// 1st base case was if sum == 0 then there is one way to make sum 0.
// then 2nd base case when n ==0 then there are no ways therefore we initialise with 0.
// then we use two nested loops and first we exclude the coin and then in the next step if value of coin is less than sum , we include it.
int getcount(int coins[], int n, int sum)
{
    int dp[sum + 1][n + 1];
    for (int i = 0; i <= n; i++)
    {
        dp[0][i] = 1;
    }
    for (int i = 1; i <= sum; i++)
    {
        dp[i][0] = 0;
    }
    // we keep sum first because for each value of sum we have use all n coins
    // but if we keep n first then for each coin we will be checking for all values of sum which will result in many repetitions and increase the number of combinations giving a wrong answer.
    for (int i = 1; i <= sum; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dp[i][j] = dp[i][j - 1];
            if (coins[j - 1] <= i)
            {
                dp[i][j] += dp[i - coins[j - 1]][j];
            }
        }
    }
    return dp[sum][n];
}

int main()
{

    return 0;
}