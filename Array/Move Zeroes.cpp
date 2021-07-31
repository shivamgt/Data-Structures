 	void moveZeroes(vector<int>& nums) 
	{

        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
                nums[j++]=nums[i];
        }
        for(;j<nums.size();j++)
            nums[j]=0;
    }
    
// OR

	void moveZeroes(vector<int>& nums) 
    {
        int j=0;
        for(int i=0;i<nums.size();i++)
            if(nums[i]!=0)
                swap(nums[j++],nums[i]);
    }
