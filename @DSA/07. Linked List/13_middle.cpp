//// Middle of a linked List
// (second in case of even)

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

//// Naive Solution
// requires two traversal of linked list
void printMiddle(Node *head)
{
    if (head == NULL)
        return;
    int count = 0;
    Node *curr;
    for (curr = head; curr != NULL; curr = curr->next)
    {
        count++;
    }
    curr = head;
    // to print first middle in case of even number of elements
    // if (count % 2 == 0)
    // {
    //     count--;
    // }
    for (int i = 0; i < count / 2; i++)
    {
        curr = curr->next;
    }
    cout << curr->data;
}

//// Efficient Solution 
// only one traversal
void Middle(Node *head)
{
    if (head == NULL)
        return;
    Node *slow = head, *fast = head;
    while (fast != NULL and fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << slow->data;
}

void printList(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    printList(head);
    cout << "The middle element of Linked list is ";
    printMiddle(head);
    return 0;
}
