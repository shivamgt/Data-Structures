Node* lca(Node*root, int a ,int b)
{
    if(!root)
        return NULL;
    if(root->data==a || root->data==b)
        return root;
    Node* l=lca(root->left,a,b);
    Node* r=lca(root->right,a,b);
    
    if(l!=NULL && r!=NULL)
        return root;
    if(l) return l;
    else return r;
}
   
int solve(Node* root, int val)
{
    if(!root)
        return 0;
    if(root->data==val)
        return 1;
    int a=solve(root->left,val);
    int b=solve(root->right,val);
    if(!a && !b)
        return 0;
    else
        return a+b+1;
}
int findDist(Node* root, int a, int b) {
    // Your code here
   Node* LCA=lca(root,a,b);
   int x=solve(LCA,a);
   int y=solve(LCA,b);
   return x+y-2;
}

