unordered_map<string, bool> ump;

bool solve(string a, string b)
{
    if(a.compare(b)==0)
        return true;
    if(a.length() <= 1)
        return false;
        
    string key = a;
    key.push_back(' ');
    key.append(b);
    if(ump.find(key)!=ump.end())
        return ump[key];
        
    int n=a.length();
    bool flag=false;
    
    for(int i=1;i<=n-1;i++)
    {
        if( solve(a.substr(0,i), b.substr(n-i,i)) && solve(a.substr(i,n-i), b.substr(0,n-i)) ||
            solve(a.substr(0,i), b.substr(0,i))   && solve(a.substr(i,n-i), b.substr(i,n-i)) 
          )   
        {
            flag=true;
            break;
        }
    }
    return ump[key]=flag;
}

int isScramble(const string A, const string B) 
{
    
    return solve(A,B);
}
