	int peakElement(int arr[], int n)
    {
        if(n<=1)
            return 0;
        
        if(arr[0]>arr[1]) return 0;					//Check  for first element
        if(arr[n-1]>arr[n-2]) return n-1;			//Check for last element 
    
        int low=1;
        int high=n-2;
    
        while(low<=high)
        {
            int mid=low+(high-low)/2;

            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
                return mid;
            else if(arr[mid]<arr[mid-1])
                high=mid-1;
            else
                low=mid+1;
        }
        return -1;
    }
