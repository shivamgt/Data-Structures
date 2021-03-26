int flag=1;
int solve(Node* root)
{
    if(!root)
        return 0;
    int l=solve(root->left);
    int r=solve(root->right);
    if(root->left && root->right && l!=r)
        flag=0;
    return 1+max(l,r);    
}
bool check(Node *root)
{
    //Your code here
    flag=1;
    solve(root);
    return flag;
}
