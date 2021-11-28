#include <iostream>
using namespace std;

class Test
{
    int val;

public:
    Test(int x)
    {
        val = x;
    }
    void getValue()
    {
        cout << "Enter a value: ";
        cin >> val;
    }
    void printValue() const
    {
        cout << "The value entered is " << val << endl;
    }
};

int main()
{
    Test d1(8);
    d1.getValue();
    d1.printValue();
    return 0;
}