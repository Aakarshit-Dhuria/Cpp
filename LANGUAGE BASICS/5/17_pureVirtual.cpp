// so why do we even use pure virtual functions.
// we use it because sometimes we dont have the actual definition of that functionality

#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void eat() = 0;
    // here we create a pure virtual functiion because for this class animal we dont really know what is the thing to eat because it is different for different animals i.e different for each derived class so we will define the body of this function in the derived classes which will be different for each animal
};

class Cat : public Animal
{
public:
    void eat()
    {
        cout << "Eats non-veg." << endl;
    }
};

class Cow : public Animal
{
public:
    void eat()
    {
        cout << "Eating veg" << endl;
    }
};

int main()
{
    Animal *a = new Cow();
    a->eat();
    Animal *b = new Cat();
    b->eat();
}