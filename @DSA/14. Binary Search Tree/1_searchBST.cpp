// Recursive Search in a Binary Search Tree
// Time : O(h) {height}
// Aux Space : O(h)

#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};

bool search(Node *root, int k)
{
    if (root == NULL)
        return false;
    if (root->key == k)
        return true;
    if (root->key < k)
        return search(root->right, k);
    // if (root->key > k)
    return search(root->left, k);
}

int main()
{
    Node *root = new Node(15);
    root->left = new Node(5);
    root->left->left = new Node(3);
    root->right = new Node(20);
    root->right->left = new Node(18);
    root->right->right = new Node(80);
    root->right->left->left = new Node(16);
    cout << search(root, 6);
    return 0;
}