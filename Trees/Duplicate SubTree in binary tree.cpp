unordered_map<string,int> ump;
string solve(Node* root)
{
    if(!root)
        return "$";
    string s=" ";
    if(!root->left && !root->right){
        s=to_string(root->data);
        return s;
    }
    s+=to_string(root->data);
    s+=solve(root->left);
    s+=solve(root->right);
    ump[s]++;
    return s;
}

bool dupSub(Node *root)
{
     //your code here
     ump.clear();
     solve(root);
     for(auto x:ump)
     {
         if(x.second>=2)
            return true;
     }
     return false;
}
