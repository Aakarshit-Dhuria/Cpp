// Reference : Cherno(Youtube)

#include <iostream>
using namespace std;

void printEntity(Entity *e);

class Entity
{
public:
    int x, y;
    // here this keyword is used to specify that the x on the left is the data member of the object and x to the right is the value passed as an argument.
    // another way for such a case as below will be to use an initialiser list.
    Entity(int x, int y)
    {
        // x = x; this wont make a sense here as we are just assigning the passed parameter x to its own value x so we use the this keyword.
        // the this here is just a pointer to the current instance of the variable x of the class.
        // Another way to represent the this pointer is to do as follows:
        // Entity *e = this;
        // e->x = x; will also work
        this->x = x;
        // the above can also be written as (*this).x = x;
        this->y = y;

        // we can also use this keyword to call a function which is outside the class and not a member of the class
        PrintEntity(this) // now here we have to pass the current instance of the class to this function.
        {
        }
    }

    // in case we use a const function the this pointer also is used as a const
    int getX() const
    {
        const Entity *e = this;
        e->x = x;
    }
};

void printEntity(Entity *e)
{
}

int main()
{
}