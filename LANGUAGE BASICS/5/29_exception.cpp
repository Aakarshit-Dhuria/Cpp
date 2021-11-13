#include <iostream>
using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    try
    {
        if (x == 0.0)
        {
            throw 0;
        }
        if (y == 0.0)
        {
            throw string("y is zero");
        }
        if (x + y < 0.0)
        {
            throw(x + y);
        }
    }
    catch (int e1)
    {
        cout << e1;
    }
    catch (string e2)
    {
        cout << e2;
    }
    catch (...) // three dots is used to catch all other exceptions occured.
    // catch(double e3) we can also use it here
    {
        cout << "x+y is less than 0";
    }
    cout << "\nBye...";
    return 0;
}