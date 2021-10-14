//Time - O(n*m)
//Space - O(1)
	
	void merge(int arr1[], int arr2[], int n, int m) 
	{
        int i=0;
        while(arr1[n-1]>arr2[0])
        {
            if(arr1[i]>arr2[0])
            {
                swap(arr1[i],arr2[0]);
                sort(arr2,arr2+m);
            }
            i++;
        }
    }
