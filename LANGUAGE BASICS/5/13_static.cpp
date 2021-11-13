// Static Members in C++
// Purpose of creating a static member is that it is shared by all the objects of a class.\
// Static members are also called class members because they are class specific.
// Static members are defined outside the class.
#include <iostream>
using namespace std;

class Player
{
public:
    static int count;
    Player() { count++; }
    ~Player() { count--; }
};
int Player::count = 0; // defining of a static data member outside the class.
int main()
{
    Player p1;
    cout << Player::count << " ";
    // we can also access count using p1.count as count is a static variable and it can be accessed by the class and every object of that class.
    // it is recommended to access it using class.
    Player p2;
    cout << Player::count << " ";
    {
        Player p3;
        cout << Player::count << " ";
    }
    cout << Player::count;
    return 0;
}