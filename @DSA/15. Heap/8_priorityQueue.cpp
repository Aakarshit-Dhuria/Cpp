// Creating a priority queue using given array

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int arr[] = {10, 5, 15};
    // Time : O(n)
    priority_queue<int> pq(arr, arr + 3); // this way of creating a priority queue takes lesser time because it internally uses a make_heap function which takes lesser time than individual push operations.
    while (pq.empty() == false)
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}