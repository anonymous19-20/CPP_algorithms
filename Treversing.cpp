#include<iostream>
using namespace std;

struct node
{
  int data;
  node* left;
  node* right;
  node(int val): data(val) , left(nullptr) , right(nullptr) {}
};

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
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

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

