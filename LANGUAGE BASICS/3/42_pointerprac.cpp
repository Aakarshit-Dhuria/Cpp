#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30};
    int *ptr = arr;
    cout << sizeof(arr) << "\n";
    cout << sizeof(ptr);
    return 0;
}