#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void increment(int *a, int *b)
{
    int a2 = *a + *b;
    int b2 = abs(*a - *b);
    *a = a2;
    *b = b2;
    cout << *a << " " << *b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    increment(&a, &b);
}