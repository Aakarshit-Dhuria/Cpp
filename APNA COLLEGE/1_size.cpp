#include<iostream>
using namespace std;

int main()
{
    int a ;
    a = 32;

    cout << "size of int is " << sizeof(a) << endl;

    float b;
    cout << "Size of float is " << sizeof(b) << endl;

    char c;
    cout << "Size of char is " << sizeof(c) << endl;

    bool d;
    cout << "Size of bool is " << sizeof(d) << endl;

    short int si;
    cout << "Size of short int is " << sizeof(si) << endl;

    long int li;
    cout << "Size of long int is " << sizeof(li) << endl;
}