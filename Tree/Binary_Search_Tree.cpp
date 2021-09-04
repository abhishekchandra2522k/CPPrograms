// Binary Search Tree - Implementation in C++
#include <iostream>

using namespace std;

struct BSTNode
{
    int data;
    BSTNode *left;
    BSTNode *right;
};

BSTNode *newNode(int data)
{
    BSTNode *temp = new BSTNode();
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

BSTNode *Insert(BSTNode *root, int data)
{
    if (root == NULL)
    {
        root = newNode(data);
        // return root;
    }
    else if (root->data >= data)
    {
        root->left = Insert(root->left, data);
    }
    else
    {
        root->right = Insert(root->right, data);
    }
    return root;
}

bool Search(BSTNode *root, int data)
{
    if (root == NULL)
        return false;
    if (root->data == data)
        return true;
    if (root->data >= data)
        return Search(root->left, data);
    else
        return Search(root->right, data);
}

int main()
{
    BSTNode *rootPtr; // pointer to root node
    rootPtr = NULL;   // setting tree as empty
    rootPtr = Insert(rootPtr, 15);
    rootPtr = Insert(rootPtr, 10);
    rootPtr = Insert(rootPtr, 5);
    rootPtr = Insert(rootPtr, 12);
    rootPtr = Insert(rootPtr, 20);
    rootPtr = Insert(rootPtr, 16);
    rootPtr = Insert(rootPtr, 22);
    int n;
    cin >> n;
    Search(rootPtr, n) ? cout << "Found\n" : cout << "Not Found\n";
    return 0;
}