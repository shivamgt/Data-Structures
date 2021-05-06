    vector<int> subsetSum(int arr[],int n,int range)
	{
	    int t[n+1][range+1];  //DP Matrix
	    
	    //Initialization
	    for(int i=0;i<=n;i++){
	        for(int j=0;j<=range;j++){
	            if(i==0)
	                t[i][j]=false;
	            if(j==0)
	                t[i][j]=true;
	        }
	    }
	    
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=range;j++){
	            if(arr[i-1]<=j)
	                t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
	            else
	                t[i][j]=t[i-1][j];
	        }
	    }
	    vector<int>v;
	    for(int j=0;j<=range;j++)
	    {
	        if(t[n][j]==true)
	            v.push_back(j);
	    }
	    return v;     
	}
	
	int minDiffernce(int arr[], int n) 
	{ 
	    int range=0;
	    for(int i=0;i<n;i++)
	        range+=arr[i];
	    vector<int>v= subsetSum(arr,n,range);
	    
	    int mn=INT_MAX;
	    for(int i=0;i<v.size();i++)
	        mn= min(mn,abs(range-2*v[i]));
	    return mn;     
	} 
