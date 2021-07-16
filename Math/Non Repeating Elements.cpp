/*Using Map

time- O(nlogn)
space- O(n)
*/
 	vector<int> singleNumber(vector<int> nums) 
    {
        unordered_map<int,int>ump;
        vector<int>res;
        for(int i=0;i<nums.size();i++)
            ump[nums[i]]++;
        for(int i=0;i<nums.size();i++)
            if(ump[nums[i]]==1)
                res.push_back(nums[i]);
        sort(res.begin(),res.end());
        return res;
    }
    
/* Using xor

time - O(n)
space- O(1)
*/
    vector<int> singleNumber(vector<int> nums) 
    {
        int res=nums[0];
        int x=0;
        int y=0;
        vector<int>v(2);
        for(int i=1;i<nums.size();i++)
            res^=nums[i];
            
        int rmask = res & -res;
        
        for(int i=0;i<nums.size();i++)
        {
            if((nums[i] & rmask)==0)
               x^=nums[i];
            else
               y^=nums[i];
        }
        v[0] = min(x,y);
        v[1] = max(x,y);
        return v;
    }

