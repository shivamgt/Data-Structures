vector<int> rightView(Node *root)
{
    vector<int> v;
    queue<Node*> q;
    if(root==NULL)  return v;
    q.push(root);
	while(!q.empty())
    {
        int len= q.size();
        v.push_back(q.back()->data);
        while(len--)
        {
            Node* temp=q.front();
            q.pop();
            if(temp->left)  q.push(temp->left);
            if(temp->right)  q.push(temp->right);
        }
    }
    return v;
}
