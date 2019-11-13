#include <iostream>
#include <stdio.h>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
    /* data */
};

void printPostorder(Node *node)
{
    if (node == NULL)
        return;
    printPostorder(node->left);
    printPostorder(node->right);

    cout << node->data << " ";
}

void printInorder(Node *node)
{
    if (node == NULL)
        return;

    printInorder(node->left);
    cout << node->data << " ";

    printInorder(node->right);
}

void printPreorder(Node *node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";

    printPreorder(node->left);
    printPreorder(node->right);
}

int main(int argc, char const *argv[])
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "\n Preorder traversal" << endl;
    printPreorder(root);

    cout << "\n Inorder traversal" << endl;
    printInorder(root);

    cout << "\n PostOrder traversal" << endl;
    printPostorder(root);

    return 0;
}
