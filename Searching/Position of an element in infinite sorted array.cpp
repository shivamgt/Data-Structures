int binarySearch(int arr[], int low, int high, int key)
{
	while(low<=high)
	{
		int mid = low + (high-low)/2;
		if(arr[mid]==key)
			return mid;
		else if(arr[mid] > key)
			high = mid-1;
		else
			low = mid+1;
	}
	return -1;
}

int findPos(int arr[], int key)
{
	int low=0;
	int high=1;
	while(arr[high]<key)
	{
		low=high;
		high=high*2;
	}
	return binarySearch(arr,low,high,key);
}
