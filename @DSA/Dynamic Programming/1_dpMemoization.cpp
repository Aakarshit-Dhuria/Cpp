// It is an optimisation over plain recursion
//// The idea of dynamic programming is to reuse the solutions of sub-problems when there are overlapping sub-problems
//// There are two ways to implement Dynamic Programming:
//// 1. Memoization (Top Down)
//// 2. Tabulation  (Bottom Up)
//// Applications of Dynamic Programming:
//// 1. Bellman Ford Algorithm  // this algorithm is used to find the shortest path from a source to the destination. it is used in routing.
//// 2. Floyd Warhall Algorithm // to find the shortest distance between every pair of vertices in a graph
//// 3. Diff Utility (LCS)  // used in daily life to know the difference between two files. version control system
//// 4. Search Closed Words (Edit Distance) // closest word to given word
//// 5. Resourse Allocation (0-1 KnapSack) // Decision Making which item to chose which not to chose based on budget.

//// Memoization :

#include <iostream>
#include <string.h>
using namespace std;
// as -1 is not a possible value for fibonnaci numbers we are using it here.
// int memo[n + 1] = {-1, -1, ...., -1};
int memo[1000000];

//// with memoization , time becomes theta(n)
//// Number of dimensions of memo array depends on the number of parameters we are changing. The size depends on minimum and maximum value of parameter.
int fib(int n)
{
    if (memo[n] == -1)
    {
        int res;
        if (n == 0 || n == 1)
            res = n;
        else
            res = fib(n - 1) + fib(n - 2);
        memo[n] = res;
    }
    return memo[n];
}

int main()
{
    int n = 5;
    memset(memo, -1, sizeof(memo));
    cout << fib(5);
    return 0;
}