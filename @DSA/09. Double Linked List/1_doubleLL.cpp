//// Double Linked List
//// Advantages:
//      1. Can be traversed in both directions
//      2. a given node can be deleted in O(1) time with given reference/pointer to it.
            // in single linked list also this is possible by swapping the data of the given node with its next node and  deleting the next node.(doesn't work for last node)
//      3. Insert/delete a given node  (in single linked list we can also insert and delete after the given node and not before)
//      4. Insert/delete from both sides in O(1) time by maintaining tail.(insert at begin,delete at begin and insert at end can be done in O(1) but not delete from end)

//// Disadvantages:
//      1. Extra Space for prev.
//      2. Code becomes more complex.


#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};

void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    printList(head);
    return 0;
}