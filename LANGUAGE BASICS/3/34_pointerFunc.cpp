#include <bits/stdc++.h>
using namespace std;

void fun(string *s)
{
    cout << *s;
}

int main()
{
    string s = "Aakarshit";
    fun(&s);
    return 0;
}