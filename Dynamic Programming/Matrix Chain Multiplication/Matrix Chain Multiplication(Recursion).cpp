	int solve(int arr[],int i,int j)
    {
        int mn=INT_MAX;
        if(i>=j)
            return 0;
        for(int k=i;k<=j-1;k++)
        {
            int tempans = solve(arr,i,k)+solve(arr,k+1,j)+(arr[i-1]*arr[k]*arr[j]);
            if(tempans<mn)
                mn=tempans;    
        }
        return mn;
    }

    int matrixMultiplication(int N, int arr[])
    {
        return solve(arr,1,N-1);
    }
