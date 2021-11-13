#include<iostream>
using namespace std;

int x = 10;
int y; // if we dont initialise a gloabal variable with any value it by default gets the value zero in it
// This doesn't happen in case of local variables.they are undefined

int main()
{
    int z;   // as it is a local variable it will not get the default value its value will be undefined
    cout << x << "\n";
    cout << y << "\n";
    cout << z << "\n";
    
    return 0;
}