// Deletion of a node in BST
// 3 cases  :
// 1. When the node to be deleted is a leaf node.
// 2. When the node to be deleted has only one child.
// 3. When the node to be deleted has both child non-empty. 

// Time : O(h)
// Aux Space : O(h)

#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};
// this get successor function is not a general purpose function
// it only works when right child is not empty
// therefore it works fine in this case because this function is called only when right is not empty.
Node *getSuccessor(Node *curr)
{
    curr = curr->right;
    while (curr != NULL and curr->left != NULL)
        curr = curr->left;
    return curr;
}

Node *delNode(Node *root, int x)
{
    if (root == NULL)
        return root;
    if (root->key > x)
        root->left = delNode(root->left, x);
    else if (root->key < x)
        root->right = delNode(root->right, x);
    else // root->key == x
    {
        if (root->left == NULL) // this handles both cases when both child are null and when only one child is empty
        // in case both are not there, then it returns right as NULL which doesnt affect our BST.
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else // when both are non-empty (we find the closest greater node)
        {
            Node *succ = getSuccessor(root);
            root->key = succ->key; // we will swap the values and delete the succeessor node.
            root->right = delNode(root->right, succ->key);
        }
    }
    return root;
}

void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->right->left = new Node(12);
    root->right->right = new Node(18);
    int x = 15;
    root = delNode(root, x);
    inorder(root);
    return 0;
}