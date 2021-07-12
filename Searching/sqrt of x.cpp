	int mySqrt(int x) 
    {
        long long start=0,end=x,res=-1,mid;
        
        while(start<=end)
        {
            mid = start + (end-start)/2;
            
            if(mid*mid<=x)
            {
                res=mid;
                start = mid+1;
            }
            else
                end=mid-1;
        }
        return res;
    }

