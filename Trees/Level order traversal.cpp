 vector<int> levelOrder(Node* root)
    {
      //Your code here
      vector<int> v;
      if(!root)
        return v;
      queue<Node*>q;
      q.push(root);
      while(!q.empty())
      {
          Node*temp=q.front();
          v.push_back(temp->data);
          q.pop();
          
          if(temp->left)
              q.push(temp->left);
          if(temp->right)
              q.push(temp->right);
      }
      return v;
    }

