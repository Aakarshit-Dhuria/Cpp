#include <iostream>
#include <vector>
using namespace std;

void delete(vector<int> &v, int &i)
{
    swap(v[1], v[i]);
    i--;
    int temp = 1;
    while (temp * 2 <= i or (temp * 2 + 1 <= i))
    {
        if (v[temp * 2] > v[temp * 2 + 1] and v[temp * 2] > v[temp])
        {
            swap(v[temp * 2], v[temp]);
            temp = temp * 2;
        }
    }
}

void insert(vector<int> &v, int i, int val)
{
    i++;
    v[i] = val;
    int temp = i;
    while (temp / 2 > 0 and v[temp / 2] < v[temp])
    {
        swap(v[temp], v[temp / 2]);
        temp = temp / 2;
    }
}

int main()
{
    vector<int> v(1000);

    return 0;
}