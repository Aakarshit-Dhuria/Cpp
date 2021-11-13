// Unordered Set:
// It is implemented internally on hashing.
// The order of elements stored in this is random and doesnt depend on the order in which they are inserted.
// There can be no duplicates as it is a set. Even if we insert an element two or more times, still the count of the element will we one.

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(5);
    s.insert(20);
    s.insert(15);
    s.insert(10);
    for (int x : s)
    {
        cout << x << " ";
    }
    cout << endl;
    // Another way of iterating through the set
    // s.end() returns iterator beyond the last element
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout << s.size() << endl;
    // s.clear(); // deletes all elements
    // cout << s.size() << endl;
    // if an element is not present, then find function becomes equal to s.end()which is beyond the last element.
    if (s.find(15) == s.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        // cout << "Found" << endl;
        cout << "Found" << *(s.find(15)) << endl; // can also be written like this.
    }

    s.insert(5); // this doesnt affect the unordered set
    //s.count() always returns 1 or 0 depending on whether the element is present or not
    if (s.count(15))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    s.erase(15); // deletes the given element.
    cout << s.size() << endl;
    //Another way of deleting:
    auto it = s.find(10);
    s.erase(it);
    cout << s.size() << endl;
    // Another way to erase using iterator:
    s.erase(s.begin(), s.end());
    cout << s.size() << endl;
    return 0;
}