	int threeSumClosest(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int closest=nums[0]+nums[1]+nums[2];
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-2;i++)
        {
            int lo=i+1; 
            int hi=n-1;
            while(lo<hi)
            {
                int curSum = nums[lo]+nums[hi]+nums[i];
                if(curSum==target)
                    return curSum;
                if(abs(target-curSum)<abs(target-closest))
                    closest=curSum;
                if(curSum>target)
                    hi--;
                else
                    lo++;
            }
        }
        return closest;
    }	
