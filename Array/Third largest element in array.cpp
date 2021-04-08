int thirdLargest(int a[], int n)
{
    //Your code here
    if(n<3)
	return -1;
        
    int first=a[0];
    for(int i=0;i<n;i++)
    {
    	if(a[i]>first)
            first=a[i];
    }
    int second=INT_MIN;
    for(int i=0;i<n;i++)
    {
    	if(a[i]>second && a[i]<first)
            second=a[i];
    }
    int third=INT_MIN;
    for(int i=0;i<n;i++)
    {
    	if(a[i]>third && a[i]<second)
            third=a[i];
    }
    return third;
}
