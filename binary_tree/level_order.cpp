#include <iostream>
using namespace std;
#include<bits/stdc++.h>
class node
{
    public:
    int data;
    node* left, *right;
};
node* newNode(int val)
{
    node* newnode =new node();
    newnode->data=val;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

int height(node*root)
{
    if(root==NULL)
        return 0;
    int hl,hr;
    hl=height(root->left);
    hr=height(root->right);
    if(hl>hr)
        return hl+1;
    else
        return hr+1;
}
int levelorder(node* root,int level)
{
    if(root==NULL)
        return 0;
    if(level==1)
        cout<<root->data<<" ";
    else
    {
        levelorder(root->left,level-1);
        levelorder(root->right,level-1);
    }
}
void printlevel(node*root)
{
    int h=height(root);
    for(int i=1;i<=h;i++)
       levelorder(root,i);
}

 
/* Driver code*/
int main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
    cout << "Level Order traversal of binary tree is \n";
    printlevel(root);
 
    return 0;
}
