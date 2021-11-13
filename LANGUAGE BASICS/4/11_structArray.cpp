//! Array of Structure

#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};

int
main()
{
    Point arr[5];
    // syntax for creating an array of structure is same as creating array for any other datatype
    for (int i = 0; i < 5; i++)
    {
        arr[i].x = i;
        arr[i].y = i * 10;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i].x << " "
            << arr[i].y << endl;
    }

    //! Like normal arrays , we can here also access individual elements of an array using index.
    Point p = arr[0];
    cout << p.x << " " << p.y << endl;
    return 0;
}