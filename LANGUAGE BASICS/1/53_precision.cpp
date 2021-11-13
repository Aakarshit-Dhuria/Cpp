#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a, b;
    cin >> a >> b;
    cout << a / b <<endl ;
    cout << std::fixed;
    cout << std::setprecision(3);
    cout << a / b;
    return 0;
}