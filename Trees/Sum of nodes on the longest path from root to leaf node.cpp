void solve(Node*root,int &res, int sum, int &h,int height)
{
    sum+=root->data;
    height++;
    if(root->left==NULL && root->right==NULL)
    {
        if(height==h)
            res=max(res,sum);
        return;    
    }
    if(root->left)
        solve(root->left,res,sum,h,height);
    if(root->right)
        solve(root->right,res,sum,h,height);
}

int height(Node*root)
{
    if(!root)
        return 0;
    int l= height(root->left);
    int r= height(root->right);
    return 1+max(l,r);
}

int sumOfLongRootToLeafPath(Node*root)
{
	// Code here
    if(!root)
        return 0;
    int h=height(root);
    int res=0;
    solve(root,res,0,h,0);
    return res;
}
