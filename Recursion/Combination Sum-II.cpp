//Time - O(2^n * k)
//Space - k*x ( k - avg length, x - combination )
	
	void solve(int ind, int target, vector<int>& candidates, vector<int>& ds, vector<vector<int>>& res)
    {
        if(target == 0)
        {
            res.push_back(ds);
            return;
        }
        
        for(int i=ind; i<candidates.size(); i++)
        {
            if( i>ind && candidates[i] == candidates[i-1] )
                continue;
            if( candidates[i] > target )
                break;
            ds.push_back(candidates[i]);
            solve(i+1, target-candidates[i], candidates, ds, res);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        vector<vector<int>> res;
        vector<int> ds;
        
        sort(candidates.begin(), candidates.end());
        solve(0, target, candidates, ds, res);
        return res;
    }
