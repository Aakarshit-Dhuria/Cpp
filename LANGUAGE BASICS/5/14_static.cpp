// Static Member Functions in C++
// static functions are the functions which are used to access and modify static data members
// When  we have static data members , it is a good practice to use statc member functions, although normal functions can also access static data members.
// static functions are not allowed to access the non-static members.(because they can be called directly using class name).
// static members dont have this  pointer as they are modifying only class specific data.
#include <iostream>
using namespace std;

class Player
{
private:
    static int count;
    // here we have made count variable private therefore it can only be accessed by a function inside the class.
public:
    Player() { count++; }
    ~Player() { count--; }
    static int getCount() { return count; }
};

int Player::count = 0;
int main()
{
    Player p1, p2;
    cout << Player::getCount();
    // static functions can also be called using class name like static variables and it is recommended to use the class name.
    return 0;
}