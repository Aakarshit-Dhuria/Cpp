// No of slots in hash table >= no of keys to be inserted
// --> Cache friendly

// Multiple ways of implementing Open Addressing:
// 1. Linear probing
// 2. Quadratic Probing
// 3. Double Hashing


struct MyHash
{
    int *arr;
    int cap, size;
    MyHash(int c)
    {
        cap = c;
        size = 0;
        for (int i = 0; i < cap; i++)
        {
            arr[i] = -1;
        }
    }
    int hash(int key)
    {
        return key % cap;
    }
    bool search(int key)
    {
        int h = hash(key);
        int i = h;
        while (arr[i] != -1)
        {
            if (arr[i] == key)
            {
                return true;
            }
            i = (i + 1) % cap;
            if (i == h)
                return false;
        }
        return false;
    }
    bool insert(int key)
    {
        if (size == cap)
            return false;
        int i = hash(key);
        while (arr[i] != -1 and arr[i] != -2 and arr[i] != key)
            i = (i + 1) % cap;
        if (arr[i] == key)
            return false;
        else
        {
            arr[i] = key;
            size++;
            return true;
        }
    }

    bool erase(int key)
    {
        int h = hash(key);
        int i = h;
        while (arr[i] != -1)
        {
            if (arr[i] == key)
            {
                arr[i] = -2;
                return true;
            }
            i = (i + 1) % cap;
            if (i == h)
                return false;
        }
        return true;
    }
};

#include <iostream>
using namespace std;

int main()
{

    return 0;
}