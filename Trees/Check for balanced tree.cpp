int flag=1;
int maxHeight(Node* root)
{
    if(!root)
        return 0;
    int l=maxHeight(root->left);
    int r=maxHeight(root->right);
    if(abs(l-r) > 1)
        flag=0;
    return max(l,r)+1;    
}
bool isBalanced(Node *root)
{
    flag=1;
    maxHeight(root);
    return flag;
}

