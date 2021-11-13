

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {10, 20};
    //! If we initialise less number of elements than given, then all the remaining elements are initialised to zero.
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n" << "Number of elements = " << sizeof(arr) / sizeof(arr[0]);
}