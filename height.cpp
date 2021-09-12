#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node*left;
    node*right;
    
};
node* create(int val)
{
    node* newnode =new node();
    newnode->data= val;
    newnode->left=NULL;
    newnode->right=NULL;
    
    return newnode;
}
node* insert(node* root, int value_to_insert)
{
    if(root==NULL)
        return create(value_to_insert);
    if(value_to_insert> root->data)
        root->right=insert(root->right,value_to_insert);
    else
        root->left=insert(root->left,value_to_insert);
    return root;
}
int height(node *root)
{
    if(root==NULL)
        return 0;
    int hl=height(root->left);
    int hr=height(root->right);
    if(hl>hr)
        return 1+hl;
    else
        return 1+hr;
}
int main()
{
    node* root;
    int ch;
    int value;
    
    while(1)
    
    {
    printf("\nenter choice 1 for insert :");
    
    printf("\nenter choice 2 for height :");
    printf("\n3 for exit");
    printf("\nenter your choice\n");
    cin>>ch;
        
        switch(ch)
        {
            case 1:
            cout<<"enter element";
            cin>>value;
            root=insert(root,value);
            break;
            
            
            
            
            
            case 2:
            int call=height(root);
            cout<<"height is "<<call;
            
            
            
            
            
            exit;
            
            
            
        }
        
    }
   

}