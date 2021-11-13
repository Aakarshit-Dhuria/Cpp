#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = " gfg ", s2 = "courses";
    string &&s3 = s1 + s2;
    s3 = "Welcome to" + s3;
    cout << s3;
    return 0;
}