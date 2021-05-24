 	int lcs(string str1, string str2)
    {
        int m=str1.size();
        int n=str2.size();
        int dp[m+1][n+1];
        
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0 || j==0)
                    dp[i][j]=0;
                else if(str1[i-1]==str2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else 
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[m][n];
    }
    
    bool isSubsequence(string s, string t)
    {
        int len=s.size();
        int cur=lcs(s,t);
        if(len==cur)
            return true;
        return false;
    }
