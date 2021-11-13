//! Using Anonymous Union  to use one type for multiple purposes
//! A node structure that can be used for both doubly linked list and binary tree.

struct Node{
    int data;
    union 
    {
        struct{
            Node *left, *right;
        };  //! this structure represents a binary tree node.
        struct{
            Node *prev, *next;
        }; //! this represents a doubly linked list node.
    };
};