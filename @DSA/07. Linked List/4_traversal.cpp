//// TRAVERSING A SINGLY LINKED LIST

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
// whenever we pass a pointer to a function , it creates a new copy of the variable and stores the same address . therefore when we pass head pointer to this function it creates a copy of its address and stores it in the variable head of function. therefore any changes made to the function variable 'head' wont affect the variable head of main function.
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;  
    }
}

int main()
{
    Node *head = new Node(10);
    printList(head); 
    printList(head);  
    return 0;
}