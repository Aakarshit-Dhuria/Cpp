// C-style string
// strcmp is a function in c not in c++

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[] = "gfg";
    char s2[] = "abcd";
    int res = strcmp(s1, s2);
    if (res == 0)
    {
        cout << "Same";
    }
    else if (res < 0)
    {
        cout << "Smaller";
    }
    else
    {
        cout << "Greater";
    }
    return 0;
}