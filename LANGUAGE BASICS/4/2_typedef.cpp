#include<iostream>
using namespace std;

typedef struct Point{
    int x;
    int y;
} P;
//! instead of writing the big name everytime we create an object of a structure we can define a smaller keyword.

int main(){
    P p;
    p.x = 10;
    p.y = 20;
    cout << p.x << " " << p.y;
    return 0;
}