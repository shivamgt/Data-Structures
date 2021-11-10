//Time - O(n)
//Space - O(n)

	int removeDuplicates(vector<int>& nums) 
    {
        vector<int> ans;
        map<int,int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]]==0)
                ans.push_back(nums[i]);
            mp[nums[i]]++;
        }
        nums = ans;
        return ans.size();
    }

//Time - O(n)
//Space - O(1)	
	
	int removeDuplicates(vector<int>& nums) 
    {
        if(nums.size()==0)
            return 0;
        int left=0;
        for(int right=1;right<nums.size();right++)
        {
            if(nums[right]!=nums[left])
            {
                left++;
                nums[left] = nums[right];
            }
        }
        return left+1;
    }
