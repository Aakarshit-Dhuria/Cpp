#include<iostream>
using namespace std;

int x = 20;
int main()
{
    int x = 10;
    {
        int x = 30;
        // int x = 20; We cannot initialise the same variable two times inside the same block.
        cout << x;
    }
}