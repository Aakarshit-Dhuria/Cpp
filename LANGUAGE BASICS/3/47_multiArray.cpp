//! MULTIDIMENSIONAL ARRAYS
//! 1. Elements are stored in row major order.
//! Only the first dimension can be ommitted when we initialise
#include<iostream>
using namespace std;

int main(){
    int arr[3][2] = {{10, 20}, {30, 40}, {50, 60}};
    //! 2. Internal curly braces are optional
    // int arr[3][2] = {10,20,30,40,50,60}  //! Also possible like this
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    return 0;
}