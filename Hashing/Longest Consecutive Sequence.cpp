// TIme - O(nlogn)
// Space - O(1)	
	
	int longestConsecutive(vector<int>& nums) 
    {
        int n=nums.size();
        int count=1;
        int mx=1;
        
        if(nums.empty())
            return 0;
        
        sort(nums.begin(),nums.end());
        
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1]+1)
                count++;
            else if(nums[i]==nums[i-1])
                continue;
            else
                count=1;
            mx = max(mx,count);
        }
        return mx;
    }
    
//Time - O(3n)
//Space - O(n)

	int longestConsecutive(vector<int>& nums) 
    {
        unordered_set<int> st;
        for(int i:nums)
            st.insert(i);
        
        int longestStreak = 0;
        
        for(int i:nums)
        {
            if(!st.count(i-1))
            {
                int currentNum = i;
                int currentStreak = 1; 
                
                while(st.count(currentNum+1))
                {
                    currentNum++;
                    currentStreak++;
                }
                longestStreak = max(longestStreak,currentStreak);
            }
        }
        return longestStreak;
    }    
