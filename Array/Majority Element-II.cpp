//Time - O(n)
//Space - O(n)	
	
	vector<int> majorityElement(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>res;
        map<int,int>mp;
        
        for(auto i: nums)
            mp[i]++;
        
        for(auto it: mp)
            if(it.second > n/3)
                res.push_back(it.first);
        return res;
    }
    
//Time - O(n)
//Space - O(1)


	vector<int> majorityElement(vector<int>& nums) 
    {
        int n=nums.size();
        int num1 = -1, num2 = -1;
        int count1 = 0 , count2 = 0;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==num1)
                count1++;
            else if(nums[i]==num2)
                count2++;
            else if(count1==0)
            {
                num1=nums[i];
                count1++;
            }
            else if(count2==0)
            {
                num2=nums[i];
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
            vector<int>res;
            count1 = count2 = 0;
            for(int i=0;i<n;i++)
            {
                if(nums[i]==num1)
                    count1++;
                else if(nums[i]==num2)
                    count2++;
            }
            if(count1>n/3)
                res.push_back(num1);
            if(count2>n/3)
                res.push_back(num2);
        return res;
    }    
