#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    int age;
    Person(int initialage)
    {
        if (initialage >= 0)
        {
            age = initialage;
        }
        else
        {
            age = 0;
            cout << "Age is not valid, setting age to 0.";
        }
    }
    int yearPasses()
    {
        age++;
        return age;
    }
    void amIold()
    {
        if (age < 13)
            cout << "You are young.";
        if (age >= 13 and age < 18)
        {
            cout << "You are a teenager."
        }
        else
        {
            cout << "You are old.";
        }
    }
};

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
