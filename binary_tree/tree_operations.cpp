#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
     node* left;
     node* right;
};
node* create(int value)
{
    node* newnode= new node();
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
    
    return newnode;
}
node* insert( node* root,int value_to_insert)
{
    if(root==NULL)
        return create(value_to_insert);
    if(root->data > value_to_insert)
        root->left=insert(root->left,value_to_insert);
    else
        root->right=insert(root->right,value_to_insert);
    return root;
}
int search(node* root,int sv)
{
    int flag=0;
    if(root==NULL)
    {
        printf("no element present");
        flag= 0;
    }
    if(sv==root->data)
        flag=1;
    else if(sv > root->data)
        return search(root->right,sv);
    else 
        return search(root->left,sv);
    return flag;
}
void inorder( node*root)
{
    if(root==NULL)
        return;
    else
        {
        
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
        }
}
void preorder(node*root)
{
    if(root==NULL)
        return;
    else
        {
        
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
        }
}

void postorder( node*root)
{
    if(root==NULL)
        return;
    else
        {
        
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
        }
}

node *minValueNode(node *root)
{
  node *temp = root;

  
  while (temp && temp->left != NULL)
    temp = temp->left;

  return temp;
}
 node *deleteNode(node *root, int data)
{
  
  

 
  if (data < root->data)
    root->left = deleteNode(root->left, data);
  else if (data> root->data)
    root->right = deleteNode(root->right, data);

  else {
    
    if (root->left == NULL) 
    {
       node *temp = root->right;
      free(root);
      return temp;
    } 
    else if (root->right == NULL) 
    {
       node *temp = root->left;
      free(root);
      return temp;
    }

    
    node *temp = minValueNode(root->right);

   
    root->data = temp->data;

    
    root->right = deleteNode(root->right, temp->data);
  }
  return root;
}



int main()
{
    
   int ch;
    node* root;
   int search_call;
   int value;
   int value_deleted;
    
    
    while(1)
    
    {
    printf("\nenter choice 1 for insert :");
    printf("\nenter choice 2 for search :");
    printf("\nenter choice 3 for inorder :");
    printf("\nenter choice 4 for postorder:");
    printf("\nenter choice 5 for preorder :");
    printf("\nenter choice 6 for delete :");
    printf("\n7 for exit");
    printf("\nenter your choice\n");
    scanf("%d",&ch);
        
        switch(ch)
        {
            case 1:
            printf("\nenter element");
            scanf("%d",&value);
            root=insert(root,value);
            break;
            
            case 2:
            printf("\nenter element to be seached");
            scanf("%d",&value);
            search_call=search(root,value);
            if(search_call==1)
            printf("element found");
            else
            printf("element not found");
            break;
            
            case 3:
            inorder(root);
            break;
            
            case 4:
            preorder(root);
            break;
            
            case 5:
            postorder(root);
            break;
            
            case 6:
            printf("\nenter element to be deleted");
            scanf("%d",&value_deleted);
            root=deleteNode(root,value_deleted);
            
            
            
            default:
            exit;
            
            
            
        }
        
    }
   
}
