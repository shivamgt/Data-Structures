int maxSubarraySum(int a[], int n){
    
    // Your code here
    int sum=0;
	    int max=a[0];
	    for(int i=0;i<n;i++)
	    {
	        sum+=a[i];
	        if(sum>max)
	          max=sum;
	        if(sum<0)
	          sum=0;
	    }
	    return max;
}
