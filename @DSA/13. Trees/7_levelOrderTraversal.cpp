//// Level Order Traversal (Breadth First search)

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

int height(Node *root)
{
    if (root == NULL)
        return 0;
    return (1 + max(height(root->left), height(root->right)));
}

void printDistK(Node *root, int k)
{
    if (root == NULL)
        return;
    if (k == 0)
        cout << root->key << " ";
    printDistK(root->left, k - 1);
    printDistK(root->right, k - 1);
}
// Time Complexity - O(h*n)
void levelOrderTraversal(Node *root)
{
    int i = 0;
    int h = height(root);
    while (i <= h)
    {
        printDistK(root, i);
        i++;
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(8);
    root->left->right = new Node(7);
    root->left->right->left = new Node(9);
    root->left->right->right = new Node(15);
    root->right->right = new Node(6);
    // 10 20 30 8 7 6 9 15
    levelOrderTraversal(root);
    return 0;
}