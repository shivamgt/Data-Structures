	int dp[201][201];
    
    int solve(int e,int f)
    {
        if(f==0 || f==1)
            return f;
        if(e==1)
            return f;
        if(dp[e][f]!=-1)
            return dp[e][f];
        
        int mn= INT_MAX;
        
        for(int i=1;i<=f;i++)
        {
            int temp = 1 + max(solve(e-1,i-1), solve(e,f-i));
            mn = min(mn,temp);
        }
        return dp[e][f]=mn;
    }
    
    int eggDrop(int n, int k) 
    {
        memset(dp,-1,sizeof(dp));
        return solve(n,k);
    }
