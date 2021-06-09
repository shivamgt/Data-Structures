void nextPermutation(vector<int>& nums) 
    {
        int idx=-1;        // To get first breakpoint
        int n=nums.size();
        
        for(int i=n-1;i>0;i--)
		{
            if(nums[i]>nums[i-1]) // Condtion to find that breaking point  
			{      
                idx=i;
                break;
            }
        }
        if(idx==-1)				 //  Handles the case of last permutation and prints the first one
            reverse(nums.begin(),nums.end());
        else{
            int prev=idx;
            for(int i=idx+1;i<n;i++)    
			{
				// Findnig the next greater element of nums[idx-1] i.e nums[prev] 
                if(nums[i]>nums[idx-1] && nums[i]<=nums[prev])   
                    prev=i;
            }
            swap(nums[idx-1],nums[prev]);   
            reverse(nums.begin()+idx,nums.end());  // Reversing the next half of array after idx
        }
    }
