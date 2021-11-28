#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main()
{
    set<int> s;
    for (int i = 10; i >= 0; i--)
    {
        s.insert(i);
    }
    // we can pass position of the element as well as the element itself O(1) in unordered set.
    // s.erase(7); 
    s.erase(s.find(7));
    if (s.find(7) == s.end())
        cout << "Not present";
    else
        cout << "Present";
    return 0;
}