//Time - O(2^N)
//Space - O(2^N)	
//Recursion
	int solve(int i,int j,int m,int n)
    {
        if( i>=m || j>=n )
            return 0;
        if( i == m-1 && j== n-1 )
            return 1;
        else
            return solve(i+1,j,m,n)+solve(i,j+1,m,n);
    }
    
    int uniquePaths(int m, int n) 
    {
        int i=0,j=0;
        return solve(i,j,m,n);
    }
    
//Time - O(m*n)
//Space - O(m*n)
//Recursion+Memoization

	int solve(int i,int j,int m,int n, vector<vector<int>> &dp)
    {
        if( i>= m || j>=n )
            return 0;
        if( i == m-1 && j == n-1 )
            return 1;
        if(dp[i][j]!=-1)
            return dp[i][j];
        else
            return dp[i][j]=solve(i+1,j,m,n,dp)+solve(i,j+1,m,n,dp);
    }
    
    int uniquePaths(int m, int n) 
    {
        vector<vector<int>> dp(m,vector<int>(n, -1));
        return solve(0,0,m,n,dp);
    }    
    
//Time - O(m-1) or O(n-1)
//Space - O(1)

	int uniquePaths(int m, int n) 
    {
        int N = n+m-2;
        int r = m-1;
        double res=1;
        
        for(int i=1;i<=r;i++)
            res = res*(N-r+i)/i;
        return (int)res;
    }    
