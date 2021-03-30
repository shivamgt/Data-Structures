unordered_map<Node*,int> dp;

int maxSum(Node* root)
{
	if(!root)
		return 0;
	
	if(dp[root])
		return dp[root];
	
	int inc = root->data;
	if(root->left)
	{
		inc+= maxSum(root->left->left);
		inc+= maxSum(root->left->right);	
	}	
	if(root->right)
	{
		inc+= maxSum(root->right->left);
		inc+= maxSum(root->right->right);
	}
	
	int exc = maxSum(root->left) + maxSum(root->right);
	
	dp[root]=max(inc,exc);
	return dp[root];
}
