int idx=0;
unordered_map<int,int> ump;

Node* solve(int in[],int pre[], int lb, int ub)
{
    if(lb>ub)
        return NULL;
    Node*res= new Node(pre[idx++]);    
    if(lb==ub)
        return res;
    int mid=ump[res->data];
    res->left = solve(in,pre,lb,mid-1);
    res->right= solve(in,pre,mid+1,ub);
    return res;
}

Node* buildTree(int in[],int pre[], int n)
{
    //add code here.
    idx=0;
    ump.clear();
    for(int i=0;i<n;i++)
        ump[in[i]]=i;
    Node* root = solve(in,pre,0,n-1);
    return root;
}

