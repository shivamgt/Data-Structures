//Time - O(n^2)
//Space - O(1)

	int trap(vector<int>& height)
     {
        int n = height.size();
	int water = 0;	
	int ans = 0;
		
        vector<int> left(n,0);
        vector<int> right(n,0);
		
        for(int i=1;i<n;i++)
            left[i] = max(left[i-1],height[i-1]);
		
        for(int i=n-2;i>=0;i--)
            right[i] = max(right[i+1],height[i+1]);
        
        for(int i=0;i<n;i++)
	{
            water = min(left[i],right[i]) - height[i];
            if(water > 0)
                ans+=water;
        }
        return ans;
    }

//Time - O(n) 
//Space- O(n)	
	int trap(vector<int>& height) 
    {
        int n=height.size();
        
        int maxL[n];
        maxL[0]=height[0];
        for(int i=1;i<n;i++)
            maxL[i] = max(height[i],maxL[i-1]);
         
        int maxR[n];
        maxR[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
            maxR[i] = max(height[i], maxR[i+1]);
        
        int water=0;
        for(int i=1;i<n-1;i++)
            water += min(maxL[i],maxR[i])-height[i];
        
        return water;
    }
    
//Time-O(n)
//Space-O(1)

 	int trap(vector<int>& height) 
    {
        int n=height.size();
        
        int left=0; int right=n-1;
        int maxLeft=0,maxRight=0;
        int res=0;
        
        while(left<=right)
        {
            if(height[left]<=height[right])
            {
                if(height[left]>=maxLeft)
                    maxLeft=height[left];
                else
                    res += maxLeft-height[left];
                left++;
            }
            else{
                if(height[right]>=maxRight)
                    maxRight=height[right];
                else
                    res += maxRight-height[right];
                right--;
            }
        }
        return res;
    }    
