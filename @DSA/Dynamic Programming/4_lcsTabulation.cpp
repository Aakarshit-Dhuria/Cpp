//// Longest Common Subsequence using Tabulation

// We take length of array m+1 and n+1 because we have to also accommodate substring of length 0 also i.e. empty subsequence.
// dp[i][j] = length of lcs of s1[0 to i-1] and s2[0 to j-1]

#include <iostream>
#include <string.h>
using namespace std;
// Time - theta(mn)
int lcs(string s1, string s2)
{
    int m = s1.length(), n = s2.length();
    int dp[m + 1][n + 1];
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 0;
    }
    for (int j = 0; j <= m; j++)
    {
        dp[0][j] = 0;
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[m][n];
}

int main()
{
    string s1 = "AXYZ", s2 = "BAZ";
    cout << lcs(s1, s2);
    return 0;
}
