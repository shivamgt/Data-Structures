//Time - O(n^2)
//Space - O(1) 
 
 	int inversionCount(long long arr[], long long N)
    {
        int count=0;
        for(int i=0;i<N-1;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                if(arr[i]>arr[j])
                    count++;
            }
        }
        return count;
    }
    
//Time - O(n)
//Space - O(1)

	int merge(int arr[],int temp[],int left,int mid,int right)
    {
        int inv=0;
        int i=left;
        int j=mid;
        int k=left;
        
        while((i<=(mid-1)) && (j<=right))
        {
            if(arr[i]<=arr[j])
                temp[k++]=arr[i++];
            else{
                temp[k++]=arr[j++];
                inv += (mid-i);
            }    
        }
        while(i<=(mid-1))
            temp[k++]=arr[i++];
        while(j<=right)
            temp[k++]=arr[j++];

         for(int m=left;m<right;m++)
             arr[m]=temp[m];
        
        return inv;    
    }
    
    int mergeSort(int arr[],int temp[],int left,int right)
    {
        int mid, inv=0;
        if(left<right)
        {
            int mid = (left+right)/2;
            
            inv += mergeSort(arr,temp,left,mid);
            inv += mergeSort(arr,temp,mid+1,right);
            inv += merge(arr,temp,left,mid+1,right);
        }
        return inv;
    }
    
    int inversionCount(int arr[], int N)
    {
        int temp[N];
        return mergeSort(arr,temp,0,N-1);
    }  
