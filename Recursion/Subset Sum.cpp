//Time - O(2^n)
//Space - O(2^n)
	
	void solve(int i, int sum, vector<int>&arr, int n, vector<int>&subsetSum)
    {
        if(i == n)
        {
            subsetSum.push_back(sum);
            return;
        }
        
        //Pick the choice
        solve(i+1, sum+arr[i], arr, n, subsetSum);
        
        //Does not pick choice
        solve(i+1, sum, arr, n, subsetSum);
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> subsetSum;
        solve(0, 0, arr, N, subsetSum);
        sort( subsetSum.begin(), subsetSum.end());
        return subsetSum;
    }
