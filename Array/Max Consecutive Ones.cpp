	int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int count = 0;
        int res = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
                count++;
            else if(nums[i]!=1)
                count=0;
            res = max(res,count);
        }
        return res;
    }
