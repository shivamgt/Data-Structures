vector <int> zigZagTraversal(Node* root)
{
	vector<int> ans;
	queue<Node*>q;
	if(!root)
	    return ans;
	q.push(root);
	
	int level=1;
	while(!q.empty())
	{
	    vector<int> temp;
	    int sz= q.size();
	    while(sz--)
	    {
	        Node*t= q.front();
	        temp.push_back(t->data);
	        q.pop();
	        if(t->left)  q.push(t->left);
	        if(t->right) q.push(t->right);
	    }
	   	if(level%2==0)
	        reverse(temp.begin(),temp.end());
	    for(int i=0;i<temp.size();i++)
	        ans.push_back(temp[i]);
	    level=!level;     
	}
	return ans;
}