// Using sorting- O(nlogn)    
	
	vector<int> sortedSquares(vector<int>& nums) 
    {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(nums[i]*nums[i]);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
    
//  Two pointers - O(n)

	vector<int> sortedSquares(vector<int>& nums) 
    {
        
        int n=nums.size();
        int left=0;
        int right=n-1;
        
        vector<int>ans(n);
        int pos=n-1;
        
        while(left<=right)    
        {   
            if( abs(nums[left]) < abs(nums[right]) )
            {
                ans[pos--] = nums[right]*nums[right];
                right--;
            }
            else{
                ans[pos--] = nums[left]*nums[left];
                left++;
            }
        }
        return ans;
    }
    
// Or Using for loop

    vector<int> sortedSquares(vector<int>& nums) 
    {
        int n=nums.size();
        int left=0;
        int right=n-1;
        
        vector<int>ans(n);
        
        for(int k=n-1;k>=0;k--)
        {
            if( abs(nums[left]) < abs(nums[right]))
                ans[k]=nums[right]*nums[right--];
            else
                ans[k]=nums[left]*nums[left++];
        }
        return ans;
    }    
