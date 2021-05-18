	int lcs(string s1, string s2, int m, int n)
	{
	    int dp[m+1][n+1];
	    
	    for(int i=0;i<=m;i++){
	        for(int j=0;j<=n;j++){
	            if(i==0 || j==0)
	                dp[i][j]=0;
	        }
	    }
	    
	    for(int i=1;i<=m;i++){
	        for(int j=1;j<=n;j++){
	            if(s1[i-1]==s2[j-1])
	                dp[i][j]= 1+dp[i-1][j-1];
	            else
	                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	        }
	    }
	    return dp[m][n];
	}
	
	int minOperations(string str1, string str2) 
	{ 
	    int m=str1.size();
	    int n=str2.size();
	    
	    int res=lcs(str1,str2,m,n);
	    
	    int ins=m-res;
	    int del=n-res;
	    
	    return ins+del;
	} 
