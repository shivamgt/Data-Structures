void ksum(Node* root, vector<int>& path,int k)
{
	if(!root)
		return;
	path.push_back(root->data);
	ksum(root->left,path,k);
	ksum(root->right,path,k);
	
	int sum=0;
	for(int i=path.size()-1;i>=0;i--)
	{
		sum+=path[i];
		if(sum==k)
		{
			for(int j=i;j<path.size();j++)
				cout<<path[j]<<" ";
			cout<<endl;	
		}
		path.pop_back();
	}	
}
void print(Node* root,int k)
{
	vector<int> path;
	ksum(root, pah, k);
}
