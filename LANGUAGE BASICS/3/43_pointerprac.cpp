#include <iostream>
using namespace std;

int main()
{
    char arr[] = {'g','f','g'};
    char *ptr = arr;
    cout << sizeof(arr) << "\n";
    cout << sizeof(ptr);
    return 0;
}