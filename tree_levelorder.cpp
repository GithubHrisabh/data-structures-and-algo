int countlevel(node* root ,int level)
{
    if(root==NULL)
        return;
    if(level==1)
        cout<<root->data;
    else if(level>1)
    {
        countlevel(root->left, level-1);
        countlevel(root->right,level-1);
    }
}
int height(node *root)
{
    if(root==NULL)
        return 0;
    else{
        int hl=height(root->left);
        int hr=height(root->right);
        if(hl>hr)
        return 1+hl;
        else
        return 1+hr;
    }
        
}
int printlevel(node *root)
{
    int i,h;
    h=height(root);
    for(i=1;i<=h;i++)
        cout<<countlevel(root,i);
    
}
