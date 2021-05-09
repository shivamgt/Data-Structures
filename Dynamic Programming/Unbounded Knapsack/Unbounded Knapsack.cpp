int unboundedknapSack(int w, int wt[], int val[], int n)
{
	int dp[n+1][w+1]; //DP Matrix
	
	//Initialization
	for(int i=0;i<=n;i++){
		for(int j=0;j<=w;j++){
			if(i==0 || j==0)
				dp[i][j]=0;
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=w;j++){
			if(wt[i-1]<=j)
				dp[i][j]= max(val[i-1]+dp[i][j-wt[i-1]],dp[i-1][j]);
			else
				dp[i][j]=dp[i-1][j];	
		}
	}
	return dp[n][w];
} 

