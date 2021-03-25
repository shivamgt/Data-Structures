int flag=1;
    int solve(Node* root)
    {
        if(!root)
            return false;
        if(!root->left && !root->right)    
            return root->data;
        int l= solve(root->left);
        int r= solve(root->right);
        int x=root->data;
        if(l+r!=x)
            flag=0;
        return l+r+x;   
    }
    
    bool isSumTree(Node* root)
    {
         // Your code here
         flag=1;
         solve(root);
         return flag;
    }
