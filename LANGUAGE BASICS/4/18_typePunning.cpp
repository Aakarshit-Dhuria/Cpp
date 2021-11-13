//! APPLICATIONS OF UNIONS:
//! TYPE PUNNING

#include <iostream>
using namespace std;

union Test
{
    int x;
    float y;
};

int main()
{
    Test t;
    t.y = 1.1;
    cout << t.x;
    return 0;
}