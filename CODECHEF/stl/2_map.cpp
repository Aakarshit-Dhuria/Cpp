#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 5, 6, 5, 7, 4, 7, 3, 8, 3, 4};
    unordered_map<int, int> m;
    for (auto a : v)
        m[a]++;
    for (pair<int, int> a : m)
    {
        cout << a.first << " " << a.second << endl;
    }
    // for (auto a : m)
    // {
    //     cout << a.first << " " << a.second << endl;
    // }
    return 0;
}