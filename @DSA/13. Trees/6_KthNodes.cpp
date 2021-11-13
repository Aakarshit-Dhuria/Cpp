// PRINT NODES AT DISTANCE K
// Time Complexity (average) : O(n)  {worst : theta(n)}
// Aux Space : O(h)   {worst : theta(h)}

#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = NULL;
        right = NULL;
    }
};

void printKDist(Node *root, int k)
{
    if (root == NULL)
        return;
    if (k == 0)
        cout << root->key << " ";
    printKDist(root->left, k - 1);
    printKDist(root->right, k - 1);
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(70);
    root->right->right->right = new Node(80);
    int k = 2;
    printKDist(root, k);
    return 0;
}