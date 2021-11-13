// Example 1  : for_each()

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v{10, 20, 30};
    for_each(v.begin(), v.end(), [](int &x)
             { x = x * 2; }); 
    //for each takes two iterators and the container(here vector) is passed as first iterator and last iterator and between two iterators we can do the given functionality given as third parameter.
    for_each(v.begin(), v.end(), [](int x)
             { cout << x << " "; });
    return 0;
}