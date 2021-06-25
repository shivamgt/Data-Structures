int findCeil(int arr[], int N, int K) 
{
    int low = 0;
    int high= N-1;
    int res = -1;
    
    while(low <= high)
    {
        int mid =  low + (high-low)/2;
        
        if(arr[mid]==K)
        {
            res=arr[mid];
            return res;
        }
        else if(arr[mid] < K)
        {
            low = mid +1;
        }
        else if(arr[mid] > K)
        {
        	res  = arr[mid];
            high = mid-1;
        }
    }
    return res;
}
