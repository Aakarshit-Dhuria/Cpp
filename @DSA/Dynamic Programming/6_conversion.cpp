// Edit Distance (convert string s1 to s2)
// Using Three Operations : Insertion, Deletion , Replace
#include <iostream>
using namespace std;

//// Recursive Solution
// Steps:
// 1. We start comparing from the last characters.
// 2. If the last characters match , we simply decrease the length of strings to m-1 and n-1.
int eD(string s1, string s2, int m, int n)
{
    if (m == 0)
        return n;
    if (n == 0)
        return m;
    if (s1[m - 1] == s2[n - 1])
    {
        return eD(s1, s2, m - 1, n - 1);
    }
    else
    {
        return 1 + min(eD(s1, s2, m, n - 1), min(eD(s1, s2, m - 1, n), eD(s1, s2, m - 1, n - 1)));
    } // we are adding 1 because we are doing atleast one of the three operations.
}

//// DP Solution (Tabulation) :  Time - theta(mn)  Aux Space - theta(mn)
// we make a 2D array of m+1 * n+1
// dp[m+1][n+1]  // dp[i][j] represents edit distance for s1(0 to i-1) and s2(o to j-1)
int ed(string s1, string s2, int m, int n)
{
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        dp[i][0] = i;
    }
    for (int j = 0; j <= n; j++)
    {
        dp[0][j] = j;
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = 1 + min(dp[i][j - 1], min(dp[i - 1][j - 1], dp[i - 1][j]));
            }
        }
    }
    return dp[m][n];  
}

int main()
{
    // string s1 = "CAT", s2 = "CUT";
    // int m = 3, n = 3;
    // cout << eD(s1, s2, m, n);
    string s1 = "SATURDAY", s2 = "SUNDAY";
    int m = s1.length();
    int n = s2.length();
    cout << ed(s1, s2, m, n);
    return 0;
}