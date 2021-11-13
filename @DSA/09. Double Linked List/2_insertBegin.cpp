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

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    if (head != NULL)
        head->prev = temp;
    return temp;
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
    head = insertBegin(head, 5);
    printList(head);
    return 0;
}