int firstOccur(int arr[],int low,int high,int key)
{
	int res=-1;
	while(low<=high)
	{
		int mid= low + (high-low)/2;
		if(arr[mid]==key)
		{
			res=mid;
			high=mid-1;
		}
		else if(arr[mid]>key)
			high=mid-1;
		else
			low=mid+1;	
	}
	return res;
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
	return firstOccur(arr,low,high,key);
}
