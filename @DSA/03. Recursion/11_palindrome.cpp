// palindrome check using recursion

#include <iostream>
using namespace std;
// T(n) = T(n-2) + theta(1)
// time - O(n)
// aux space - O(n) 
bool isPalindrome(string s, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    // if (s[start] == s[end])
    // {
    //     return (s, start + 1, end - 1);
    // }
    return (s[start] == s[end]) and isPalindrome(s, start + 1, end - 1);
}

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int start = 0, end = n - 1;
    cout << isPalindrome(s, start, end);
    return 0;
}