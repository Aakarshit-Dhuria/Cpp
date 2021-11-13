#include<iostream>
using namespace std;

int getMax(int x, int y){
    if(x>y){
        return x;
    }
    return y;
}

int main()
{
    int a = 10, b = 20;
    cout << getMax(a, b);
    
}