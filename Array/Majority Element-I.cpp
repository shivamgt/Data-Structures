// Using Hashing
 
    int majorityElement(vector<int>& nums) 
	{
	    int n=nums.size();
        unordered_map<int,int>ump;
        for(int i=0;i<n;i++)
            ump[nums[i]]++;
        for(int i=0;i<n;i++)
        {
            if(ump[nums[i]] > n/2)
                return nums[i];
        }
        return -1;
    }
	
// Using Moore Voting Algorithm
	
	int majorityElement(vector<int>& nums) 
    {
        int candidate=nums[0];
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
                candidate=nums[i];
            if(candidate==nums[i])
                count++;
            else
                count--;
        }
        return candidate;
	}
        
        
        

