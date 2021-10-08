//Time - O(n^2)
//Space - O(1)

int maxLen(int arr[], int n)
{
    int max_len = 0;
 
    for (int i = 0; i < n; i++) 
	{
        int curr_sum = 0;
 
        for (int j = i; j < n; j++) 
		{
            curr_sum += arr[j];
 
            if (curr_sum == 0)
                max_len = max(max_len, j - i + 1);
        }
    }
    return max_len;
}

//Time - O(n)
//Space - O(n) 	
	
	int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int>ump;
        int sum=0;
        int mx=0;
        for(int i=0;i<n;i++)
        {
            sum += A[i];
            if(sum==0)
                mx = i+1;
            else{    
                if(ump.find(sum)!=ump.end())
                    mx = max(mx, i-ump[sum]);
                else
                    ump[sum]=i;
            }
        }
        return mx;
    }
