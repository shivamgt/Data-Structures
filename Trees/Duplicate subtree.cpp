unordered_map<string,int>ump;
vector<int>v;
string solve(Node* root)
{
    if(!root)
        return "$";
    string s=" ";
    s+=to_string(root->data);
    s+=solve(root->left);
    s+=solve(root->right);
    if(ump[s]==1)
        v.push_back(root->data);
    ump[s]++;
    return s;
}

void printAllDups(Node* root)
{
    // Code here
    ump.clear();
    v.clear();
    solve(root);
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    if(v.size()==0) 
        cout<<"-1";
}
