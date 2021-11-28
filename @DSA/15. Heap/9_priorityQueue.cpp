// priority queue with our user defined type and our own comparison function

#include <iostream>
#include <queue>
using namespace std;

struct Person
{
    int age;
    float height;
    Person(int a, float h)
    {
        age = a;
        height = h;
    }
};

struct myCmp
{
    bool operator()(Person const &p1, Person const &p2)
    {
        p1.height < p2.height;
    }
};

int main()
{
    priority_queue<Person, vector<Person>, myCmp> pq; // this creates a priority queue of Person type with person with max height at top
    return 0;
}