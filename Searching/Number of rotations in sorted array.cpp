int findKRotation(int arr[], int n)
{
	int start=0;
	int end=n-1;
	int minimum=0;

    if(arr[start] < arr[end]) 
		return 0;

    while(start <= end)
    {
        int mid = start + ((end-start)/2);
        int prev = (mid+n-1)%n; 			//if mid is first element
        int next = (mid+1)%n; 				//if mid is the last element

        if(arr[mid] <= arr[prev] && arr[mid] <= arr[next])
            return mid;

        else if(arr[mid] > arr[end])
            start = mid+1; 					
        else if(arr[mid] < arr[end])
            end = mid-1; 				
    }
    return minimum;
}
