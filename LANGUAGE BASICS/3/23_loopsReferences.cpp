//! RANGE BASED FOR LOOP USING REFERENCES
// Refer readme.txt

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string arr[] = {"geeksforgeeks", "cpp course", "learning"};
    for (const string &s : arr)
    {
        cout << s << "\n";
    }
    return 0;
}