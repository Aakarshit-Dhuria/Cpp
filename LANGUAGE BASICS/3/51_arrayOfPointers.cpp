//! ARRAY OF POINTERS
//! DIFFERENCE BETWEEN THIS AND DOUBLE POINTER IS THAT IN DOUBLE POINTER METHOD THE ARRAY OF POINTER WAS ALSO DYNAMICALLY ALLOCATED BUT HERE IT IS A NORMAL ARRAY OF POINTERS.
//! i.e. the original array is not allocated dynamically and the inner individual members are dynamically allocated on heap.
#include <iostream>
using namespace std;
int main()
{
    int m = 3, n = 2;
    int *arr[m];
    //! here this array of pointers is allocated on stack.
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n]; //! this array is dynamicaly allocated
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 10;
            cout << arr[i][j] << " ";
        }
    }
}