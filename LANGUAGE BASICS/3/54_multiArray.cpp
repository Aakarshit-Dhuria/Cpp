//! Passing MultiDimensinal Arrays as arguments to functions
// This method only works for the given size matrix for e.g. in this case 3 x 2
#include <iostream>
using namespace std;

void print(int mat[3][2])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << mat[i][j] << " ";
        }
    }
}

int main()
{
    int mat[3][2] = {{10, 20}, {30, 40}, {50, 60}};
    print(mat);
    return 0;
}