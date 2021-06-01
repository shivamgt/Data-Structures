class Solution{
public:
    int dp[501][501];
    bool isPalindrome(string str,int i,int j)
    {
        while(i<j)
        {
            if(str[i]!=str[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    
    int solve(string str, int i,int j)
    {
        int mn=INT_MAX;
        int left,right;
        if(i>=j || isPalindrome(str,i,j)==true)
        {
            dp[i][j]=0;
            return 0;
        }
        if(dp[i][j]!=-1)
            return dp[i][j];
        for(int k=i;k<=j-1;k++)
        {
            if(dp[i][k]!=-1)
                 left=dp[i][k];
            else
                left=solve(str,i,k);
                
            if(dp[k+1][j]!=-1)
                right=dp[k+1][j];
            else 
                right=solve(str,k+1,j);
                
            int temp= 1+left+right;
            if(temp<mn)
                mn=temp;
        }
        return dp[i][j]=mn;
    }

    int palindromicPartition(string str)
    {
        memset(dp,-1,sizeof(dp));
        int n=str.size();
        return solve(str,0,n-1);
    }
};
