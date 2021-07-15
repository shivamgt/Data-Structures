int fincdSingle(int arr[],int n)
{
	int res=arr[0];
	for(int i=0;i<n;i++)
		res=res^arr[i];
	return res;	
}
