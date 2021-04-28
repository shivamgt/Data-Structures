	int lenOfLongSubarr(int A[],  int n, int k) 
    { 
        unordered_map<int,int> mp;
        int sum = 0 , maxLength = 0;
        for(int i=0;i<n;i++)
        {
            sum += A[i];
            if(mp.find(sum) == mp.end())
                mp[sum] = i;
            
            if(mp.find(sum - k) != mp.end())
                maxLength = max(maxLength , i - mp[sum - k]);
            
            if(sum == k)
                maxLength = max(maxLength,i + 1);
        }
        return maxLength;
    } 

