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
