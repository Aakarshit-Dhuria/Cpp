// To avoid giving any random address we use null pointer

#include <iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    if (ptr != NULL)
    {
        cout << *ptr;
    }
    return 0;
}