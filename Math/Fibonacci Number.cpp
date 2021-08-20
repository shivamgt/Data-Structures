Time - O(2^n)

	int fib(int n)
    {
        if(n<=1)
            return n;
        else
            return fib(n-1)+fib(n-2);
    }
    
Time - O(n)

	int dp[31];
    int fib(int n)
    {
        memset(dp,-1,sizeof(dp));
        return solve(n);
    }
    
    int solve(int n)
    {
        if(n<=1) 
			return n;
        if(dp[n]!=-1)
            return dp[n];
        return dp[n] = solve(n-1)+solve(n-2);
    }    
