// destructor is called as soon as the object goes out of scope.
#include <iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout << "Constructor Called." << endl;
    }
    ~Test()
    {
        cout << "Destructor Called." << endl;
    }
};

int main()
{
    {
        Test t1;
    }
    // as the test t1 goes out of scope therefore destructor for t1 is called her. 
    Test t2;



    
    return 0;
}