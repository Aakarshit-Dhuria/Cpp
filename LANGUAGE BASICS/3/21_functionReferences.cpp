//! PASS BY REFERNCE

#include <bits/stdc++.h>
using namespace std;
//
void fun(const string &s)
{
    cout << s;
}
//! here if such a large string will be copied into the function it uses more memory and may cause performance issues.
int main()
{
    string s = "geeksforgeeks courses";
    fun(s);
    return 0;
}