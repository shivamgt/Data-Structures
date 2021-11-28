//Time - O(2^n * n)
//Space - O(n*k)  ( k - string length, n - insertion )
	 
	void solve( int ind, string s, vector<string>& path, vector<vector<string>>& res)
    {
        if( ind == s.size())
        {
            res.push_back(path);
            return;
        }
        for(int i = ind; i < s.size(); i++)
        {
            if( isPalindrome(s, ind, i))
            {
                path.push_back(s.substr(ind, i - ind + 1));
                solve( i+1, s, path, res);
                path.pop_back();
            }
        }
    }
    
    bool isPalindrome( string s, int start, int end )
    {
        while( start <= end )
        {
            if( s[start++] != s[end--] )
                return false;
        }
        return true;
    }
    
    vector<vector<string>> partition(string s) 
    {
        vector<vector<string>> res;
        vector<string> path;
        
        solve(0, s, path, res);
        return res;
    }
