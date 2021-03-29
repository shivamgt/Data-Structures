int maximum(Node* root, int& ans)
{
    if (root == NULL)     
        return 0; 
    int l=maximum(root->left,ans);
	int r=maximum(root->right,ans);    
    int currSum = root->data+l+r;
    ans = max(ans, currSum);
    return currSum;
}

int findLargestSubtreeSum(Node* root)
{
    if (root == NULL)     
        return 0;  
    int ans = INT_MIN;
    maximum(root, ans);
    return ans;
}
