// There is no direct syntax in C++ to specify number of rows and columns as seprate parameters because matrix declaration doesn't allow to omit all the dimensions of a multi dimensional array
//! 3rd Method
//! Therefore we use global variables to define the number of rows and columns

#include <iostream>
using namespace std;

const int R = 3;
const int C = 2;

void print(int mat[R][C])
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << mat[i][j] << " ";
        }
    }
}

int main()
{
    int mat[R][C] = {{10, 20}, {30, 40}, {50, 60}};
    print(mat);
    return 0;
}