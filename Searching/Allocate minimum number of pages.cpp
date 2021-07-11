 	bool isValid(int arr[],int n,int m,int mx)
    {
        int student=1;
        int sum=0;
        
        for(int i=0;i<n;i++)
        {
            sum +=arr[i];
            if(sum>mx)
            {
                student++;
                sum=arr[i];
            }
            if(student>m)
                return false;
        }
        return true;
    }
    
    int findPages(int arr[], int n, int m) 
    {
        if(n<m)
            return -1;
        
        int sum=0;
        int mx = *max_element(arr,arr+n);
        int res = -1;
            
        for(int i=0;i<n;i++)
            sum += arr[i];
            
        int start = mx;
        int end = sum;
        
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            if(isValid(arr,n,m,mid)==true)
            {
                res=mid;
                end = mid-1;
            }
            else 
                start = mid+1;
        }
        return res;
    }
