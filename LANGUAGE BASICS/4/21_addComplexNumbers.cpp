#include <iostream>
using namespace std;

struct complex
{
    int real, imag;
};

int main()
{
    complex n1, n2, n3;
    cin >> n1.real >> n1.imag;
    cin >> n2.real >> n2.imag;

    n3.real = n1.real + n2.real;
    n3.imag = n1.imag + n2.imag;

    cout << n3.real << "+" << n3.imag << "i";
    return 0;
}