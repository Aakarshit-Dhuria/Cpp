#include<iostream>
using namespace std;

// Now global variables can also be initialised after the main function by using the extern keyword

extern int x;

int main()
{
    cout << x << "\n";
    return 0;
}

int x = 10;