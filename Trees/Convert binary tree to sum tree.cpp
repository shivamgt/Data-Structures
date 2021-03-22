int solve(Node *root)
{
    int l,r,x;
    if(!root)  
        return 0;
    l=solve(root->left);
    r=solve(root->right);
    x=root->data;
    root->data=l+r;
    return x+l+r;
}

void toSumTree(Node *root)
{
    solve(root);
}
