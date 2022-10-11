//Time - O(n+m)
//Space - O(n+m)

//Using set

vector<int> findUnion(int arr1[], int arr2[], int n, int m){

        vector<int> v;
        set<int>s;
        for(int i=0; i<n; i++)
            s.insert(arr1[i]);
        for(int i=0; i<m; i++)
            s.insert(arr2[i]);
        for(auto itr : s)
            v.push_back(itr);
        return v;    
    }
    
// Using Two Pointer apporach

 vector<int> findUnion(int arr1[], int arr2[], int n, int m){
 	
        vector<int> v;
        int i=0, j=0;
        while(i<n && j<m){
            if( arr1[i] < arr2[j] ){
                v.push_back(arr1[i++]);
                while(i<n && arr1[i-1] == arr1[i])
                    i++;
            }
            else if( arr1[i] > arr2[j] ){
                v.push_back(arr2[j++]);
                while(j<m && arr2[j-1] == arr2[j])
                    j++;
            }
            else{
                v.push_back(arr1[i++]);
                j++;
                while(i<n && arr1[i-1] == arr1[i]) i++;
                while(j<m && arr2[j-1] == arr2[j]) j++;
            }
        }
        while(i<n){
            v.push_back(arr1[i++]);
            while(i<n && arr1[i-1] == arr1[i])
                i++;
        }
        while(j<m){
            v.push_back(arr2[j++]);
            while(j<m && arr2[j-1] == arr2[j])
                j++;
        }
        return v;
    }    
//OR

vector<int> findUnion(int arr1[], int arr2[], int n, int m){
	vector<int>ans;
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j])
        	ans.push_back(arr1[i++]);
        else if(arr1[i]>arr2[j])
            ans.push_back(arr2[j++]);
        else{
            ans.push_back(arr1[i++]);
          	j++;
        }
    }
        
    while(i<n)
        ans.push_back(arr1[i++]);
         
	while(j<m)
		ans.push_back(arr2[j++]);
         
    ans.erase(unique( ans.begin(), ans.end() ), ans.end() );
    return ans;
}
		
// Using Unordered map
// Time - O(nlogn + mlogm)
// Space - O(n+m)

    int doUnion(int a[], int n, int b[], int m)  {
        unordered_map<int,int>ump;
        
        for(int i=0;i<n;i++)
            ump[a[i]]++;
        for(int i=0;i<m;i++)
            ump[b[i]]++;    
        return ump.size();    
    }		
