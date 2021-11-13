//// Substring means continuous characters from a string
//// Subsequence means may or may not be continuous but in the same orignial order.
//// In a string of length n, 2^n subsequences are possible.

//// LONGEST COMMON SUBSEQUENCE
// Naive solution is to find all the subsequences of both the strings and then find the common subsquences.
#include <iostream>
#include <string.h>
using namespace std;
/*
//// NAIVE SOLUTION: // Time(worst case) - O(2^n)
int lcs(string s1, string s2, int m, int n)
{
    if (m == 0 or n == 0)
    {
        return 0;
    }
    if (s1[m - 1] == s2[n - 1])
    {
        return 1 + lcs(s1, s2, m - 1, n - 1);
    }
    else
    {
        return max(lcs(s1, s2, m - 1, n), lcs(s1, s2, m, n - 1));
    }
    return 0;
}
*/
//// MEMOISATION BASED SOLUTION: Time - theta(mn)

int memo[1000][1000];
int lcs(string s1, string s2, int m, int n)
{
    if (memo[m][n] != -1)
    {
        return memo[m][n];
    }
    if (m == 0 or n == 0)
    {
        memo[m][n] = 0;
    }
    else
    {
        if (s1[m - 1] == s2[n - 1])
        {
            memo[m][n] = 1 + lcs(s1, s2, m - 1, n - 1);
        }
        else
        {
            memo[m][n] = max(lcs(s1, s2, m - 1, n), lcs(s1, s2, m, n - 1));
        }
    }
    return memo[m][n];
}

int main()
{
    string s1 = "AXYZ", s2 = "BAZ";
    int n = 4, m = 3;
    memset(memo, -1, sizeof(memo));
    cout << lcs(s1, s2, n, m);
    // string s1, s2;
    // cin >> s1 >> s2;
    // int m = s1.length();
    // int n = s2.length();
    // memset(memo, -1, sizeof(memo));
    // cout << lcs(s1, s2, m, n);
    // return 0;
}