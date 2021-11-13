//// Search in a Singly Linked List
// Time - O(n)
// Aux Space - O(1)
// Recursive Aux Space - O(n)
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int searchLL(Node *head, int x)
{
    int i = 1;
    while (head != NULL)
    {
        if (head->data == x)
        {
            return i;
        }
        i++;
        head = head->next;
    }
    return -1;
}

// int search(Node *head, int x)
// {
//     int pos = 1;
//     Node *curr = head;
//     while (curr != NULL)
//     {
//         if (curr->data == x)
//         {
//             return pos;
//         }
//         else
//         {
//             pos++;
//             curr = curr->next;
//         }
//     }
//     return -1;
// }

int rSearchLL(Node *head, int x)
{
    if (!head)
    {
        return -1;
    }
    if (head->data == x)
    {
        return 1;
    }

    int res = rSearchLL(head->next, x);
    if (res == -1)
        return -1;
    else
    {
        return res + 1;
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(5);
    head->next->next = new Node(20);
    head->next->next->next = new Node(15);

    cout << searchLL(head, 20) << endl;
    cout << rSearchLL(head, 20) << endl;

    return 0;
}