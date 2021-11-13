#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    m["gfg"] = 20;
    m["ide"] = 30;
    m["courses"] = 15;

    // if the given key is not present, find function returns a special iterator, m.end() which is an iterator pointing to an element after the last element.
    if (m.find("ide") != m.end())
    {
        cout << "Found\n";
    }
    else
    {
        cout << "Not found\n";
    }

    // Another way of finding:
    auto it = m.find("ide");
    if (it != m.end())
    {
        cout << it->second << endl;
    }

    // as iterator is an address we need to use arrow operator
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    // whereas find function returns an iterator ,count function returns 1 or 0 depending on whether element is present or not.
    if (m.count("ide") > 0)
    {
        cout << "Found\n";
    }
    else
    {
        cout << "Not Found\n";
    }

    // size function returns u number of key value pairs in unordered map
    cout << m.size() << endl;
    // erase function removes key value pair.
    m.erase("ide");
    m.erase(m.begin()); // erase function can also take iterator as an argument and here it removes the first key value pair.
    cout << m.size() << endl;
    m.erase(m.begin(), m.end());  // another form of erase.
    cout << m.size() << endl;
    return 0;
}