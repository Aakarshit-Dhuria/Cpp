#include <iostream>
using namespace std;

int average(int arr[], int n)throw(int,string)// optional to write throw here but good to write. it just tells the compiler that the function mmight throw an exception of string type.
// we can write all data types which might catch an exception as comma-seperated values.
{
    if (n == 0)
    {
        throw string("Array size is zero\n");
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum / n;
}

int main()
{
    int arr[] = {4, 5, 2};
    int n = 0;
    try
    {
        int res = average(arr, n);
        cout << res;
    }
    catch (string &e)
    {
        cout << e;
    }
    cout << "End!";
    return 0;
}