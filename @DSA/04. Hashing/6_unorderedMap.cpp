// UNORDERED MAP
// Used to store key,value pairs.
// Uses Hashing        (
// No order of keys    (ordered in case of map)
// search ,insert,delete in O(1) time {O(log n) in case of map}

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    m["gfg"] = 20; // square bracket operator is member access operator.
    // when the given key is present, it returns a reference to the value of that key.
    // if key not present, then it inserts the key and returns reference for that key. and initialise with default value.
    m["ide"] = 30;
    m.insert({"courses", 15}); // the insert function takes a pair as an argument
    // the curly brackets are used to denote a pair.
    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}