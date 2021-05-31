//TLE

class Solution{
public:
    int dp[501][501];
    bool isPalindrome(string str,int i,int j)
    {
        if(i==j)
            return true;
        if(i>j)
            return true;
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
        if(i>=j)
            return 0;
        if(isPalindrome(str,i,j)==true)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        for(int k=i;k<=j-1;k++)
        {
            int temp= 1+solve(str,i,k)+solve(str,k+1,j);
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

