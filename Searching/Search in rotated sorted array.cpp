int search(int A[], int l, int h, int key)
{
    while(l<=h)
    {
        int mid = l + (h-l)/2;
        if(A[mid]==key)
            return mid;
            
        if(A[l]<=A[mid]) 					// Left part
        {    
            if(A[l]<=key && A[mid]>=key)
                h=mid-1;
            else
                l=mid+1;
        }
        
        else{
            if(A[mid]<=key && A[h]>=key)	// Right part
                l=mid+1;
            else
                h=mid-1;
        }
    }
    return -1;
}
