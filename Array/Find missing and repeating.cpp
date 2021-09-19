	int *findTwoElement(int *arr, int n) 
	{
        int duplicate,missing;
        
        for(int i=0;i<n;i++)
        {
            if(arr[abs(arr[i])-1]<0)
                duplicate=abs(arr[i]);
            else
                arr[abs(arr[i])-1] = - arr[abs(arr[i])-1];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                missing = i+1;
                break;
            }   
        }
        return new int[2]{duplicate,missing};
    }
