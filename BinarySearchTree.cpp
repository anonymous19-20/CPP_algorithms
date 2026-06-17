#include<iostream>
using namespace std;

struct node
{
  int data;
  node* left;
  node* right;
  node(int val): data(val) , left(nullptr) , right(nullptr) {}
};

node* Insert(node* root , int val)
{
  if(root==nullptr)
    return new node(val);
  if(val < root->data)
    root->left = Insert(root->left , val);
  else
    root->right = Insert(root->right , val);

  return root;
}

  void PreOrder(node* root)
{
  if(root==nullptr)
    return;
  cout << root->data << " ";
  PreOrder(root->left);
  PreOrder(root->right);
}

void InOrder(node* root)
{
  if(root==nullptr)
    return;
  InOrder(root->left);
  cout << root->data << " ";
  InOrder(root->right);
}

void PostOrder(node* root)
{
  if(root==nullptr)
    return;
  PostOrder(root->left);
  PostOrder(root->right);
  cout << root->data << " ";
}


  int main()
{
  node* root = nullptr;

    // Insert elements (BST property will arrange them automatically)
    root = Insert(root, 50);
    root = Insert(root, 30);
    root = Insert(root, 70);
    root = Insert(root, 20);
    root = Insert(root, 40);
    root = Insert(root, 60);
    root = Insert(root, 80);

    cout << "Prefix (Preorder): ";
    PreOrder(root);
    cout << endl;

    cout << "Infix (Inorder): ";
    InOrder(root);
    cout << endl;

    cout << "Postfix (Postorder): ";
    PostOrder(root);
    cout << endl;

    return 0;
}

