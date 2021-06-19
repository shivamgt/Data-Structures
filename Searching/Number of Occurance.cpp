	int bSearch(int arr[],int start,int end,int k,bool flag)
	{
	    int res=-1;
	    while(start<=end)
	    {
	        int mid = start + (end-start)/2;
	    
	        if(k==arr[mid] && flag==0)
	        {
	            res=mid;
	            end=mid-1;
	        }
	        else if(k==arr[mid] && flag==1)
	        {
	            res=mid;
	            start=mid+1;
	        }
	        else if(k<arr[mid])
	            end=mid-1;
	        else
	            start=mid+1;
	    }
	    return res;
	}
		
	int count(int arr[], int n, int x) 
	{
	    int start=0;
	    int end=n-1;
	    
	    int f = bSearch(arr,start,end,x,0);
	    int l = bSearch(arr,start,end,x,1);
	    
	    if(l==-1)
	        return 0;
	    return l-f+1;
	}
