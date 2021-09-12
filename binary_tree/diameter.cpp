#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* left ;
    node *right;
    
};
node *create(int value)
{
    node* newnode = new node();
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
    
}
node *insert(node* root, int value_to_insert)
{
    if(root==NULL)
        return create(value_to_insert);
    else if(value_to_insert> root->data)
        root->right=insert(root->right,value_to_insert);
    else
        root->left=insert(root->left,value_to_insert);
        
    return root;
}
int diameter(node* root)
{
    int d=0;
    if(root==NULL)
        return 0;
    int dl=diameter(root->left);
    int dr=diameter(root->right);
    d=max(d,1+dl+dr);
    return 1+ max(dl,dr);
}
int main()
{
    node* root;
    int ch;
    int value;
    
    while(1)
    
    {
    printf("\nenter choice 1 for insert :");
    
    printf("\nenter choice 2 for binary tree diameter :");
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
            int call=diameter(root);
            cout<<"diameter "<<call;
            
            
            
            
            
            exit;
            
            
            
        }
        
    }
   

}
