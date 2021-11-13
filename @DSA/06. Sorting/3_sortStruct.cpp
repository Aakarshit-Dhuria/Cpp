// Sorting according to our own function // here done using structure

#include <iostream>
#include <algorithm>
using namespace std;

struct Point
{
    int x, y;
};

bool myComp(Point p1, Point p2)
{
    return (p1.x < p2.x);
}

bool myCompy(Point p1, Point p2)
{
    return (p1.y >= p2.y);  // in increasing order of y
}


int main()
{
    Point arr[] = {{3, 10}, {2, 8}, {5, 4}};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n, myComp);
    for (auto i : arr)
    {
        cout << i.x << " " << i.y << endl;
    }
    cout << endl;
    sort(arr, arr + n, myCompy);
    for (auto i : arr)
    {
        cout << i.x << " " << i.y << endl;
    }
    return 0;
}