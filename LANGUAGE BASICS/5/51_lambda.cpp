#include <iostream>
using namespace std;

int main()
{
    static int x = 5, y = 10;
    auto lambda_exp = [](int a)
    {
        x = x + a;
        y = y + a;
    };
    lambda_exp(20);
    cout << x << " " << y << endl;
    return 0;
}