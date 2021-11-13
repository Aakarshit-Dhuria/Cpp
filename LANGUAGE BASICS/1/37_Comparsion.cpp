//! <=> comparison operator

#include<iostream>
using namespace std;

int main()
{
    int x = 10, y = 20;
    auto res = x <=> y;
    if (res > 0){
        cout << "X is greater";
    }
    else if (res < 0){
        cout << "X is smaller";
    }
    else
    {
        cout << "X is equal to Y";
    }
    
}