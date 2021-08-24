	int subarraySum(vector<int>& nums, int k) 
    {
        int n=(int)nums.size();
        int count=0;
        unordered_map<int,int>ump;
        int sum=0;
        
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(sum==k)
                count++;
            if(ump.find(sum-k)!=ump.end())
                count+=ump[sum-k];
            ump[sum]++;
        }
        return count;
    }
