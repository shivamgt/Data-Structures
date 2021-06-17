int searchInSorted(int arr[], int N, int K) 
{ 
    int start=0;
    int end=N-1;
    
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid]==K)
            return 1;
        else if(K < arr[mid])
            end=mid-1;
        else
            start=mid+1;
    }
    return -1;
}
