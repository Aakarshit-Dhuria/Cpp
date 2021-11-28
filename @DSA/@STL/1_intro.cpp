#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {10, 15, 6, 20};
    sort(arr, arr + 4);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    if (binary_search(arr, arr + 4, 6))
        cout << "Present" << endl;
    else
        cout << "Not Present" << endl;
    return 0;
}