// User Defined Exceptions in C++
// It is always recommended to use user defined exceptions or non-primitive data types as exceptions
#include <iostream>
using namespace std;

class ArraySizeZeroException
{
};
class ArraySizeNegativeException
{
};

int average(int arr[], int n)
{
    if (n == 0)
        throw ArraySizeZeroException();
    if (n < 0)
        throw ArraySizeNegativeException();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int res = sum / n;
    return res;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    // int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    try
    {
        int res = average(arr, n);
        cout << res;
    }
    catch (ArraySizeNegativeException &e2)
    {
        cout << "Array size is negative\n";
    }
    catch (ArraySizeZeroException &e1)
    {
        cout << "Array size is zero\n";
    }
    return 0;
}