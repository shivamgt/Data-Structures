int firstOccur(int arr[],int start, int end,int k)
{
    int res=-1;
    while(start<=end)
    {
        int mid= start + (end-start)/2;
        if(k==arr[mid])
        {
            res=mid;
            end=mid-1;
        }
        else if(k<arr[mid])
            end=mid-1;
        else
            start=mid+1;
    }
    return res;
}

int lastOccur(int arr[],int start, int end,int k)
{
    int res=-1;
    while(start<=end)
    {
        int mid= start + (end-start)/2; 
        if(k==arr[mid])
        {
            res=mid;
            start=mid+1;
        }
        else if(k<arr[mid])
            end=mid-1;
        else
            start=mid+1;
    }
    return res;
}

vector<int> find(int arr[], int n , int x )
{
    int start = 0;
    int end = n-1;
    
    int f = firstOccur(arr,start,end,x);
    int l = lastOccur (arr,start,end,x);
    
    vector<int>v{f,l};
    
    return v;
    
}
