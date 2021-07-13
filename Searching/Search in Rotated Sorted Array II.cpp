 	bool search(vector<int>& nums, int target)
    {
        if(nums.size()==0)
            return false;
        
        if(nums.size()==1)
        {
            if(nums[0]==target)
                return true;
            return false;
        }
        
        int start = 0;
        int end = nums.size()-1;
        
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            
            if(nums[mid] == target)
                return true;
            
            if(nums[start] == nums[mid] && nums[end] == nums[mid])
            {
                start++;
                end--;
            }

            else if(nums[start] <= nums[mid])
            {
                if(nums[start]<=target && nums[mid]>target)
                    end = mid-1;
                else
                    start = mid+1;
            }
            else{
                if(nums[mid]<target && nums[end]>=target)
                    start = mid+1;
                else
                    end = mid-1;    
            }
        }
        return false;
    }
