//Time - O(m*n)
//Space - O(1)

int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
        int ind = -1;
        int mx = 0;
        for(int i=0; i<n; i++){
            int count = 0;
            for(int j=0; j<m; j++)
                if(arr[i][j] == 1)
                    count++;
            
            if( count>mx ){
                mx = count;
                ind = i;
            }        
        }
        return ind;
	}
	
//Time - O(nlogm)
//Space - O(1)

	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
        int mini = m, ind = n;
	    for(int i=0; i<n; i++) {
	        int lo = 0, hi = m-1, ans = m;
	        while(lo <= hi) {
	            int mid = lo + (hi-lo)/2;
	            if(arr[i][mid] == 1) {
	                ans = mid;  // ans is storing index for 1st occurrence of 1
	                hi = mid - 1;
	            }
	            else
	                lo = mid + 1;
	        }
	        if(ans < mini) {
	            mini = ans;
	            ind = i;
	        }
	    }
	    if(ind == n) return -1;
	    return ind;
	}

//Time - O(m+n)
//Space - O(1)

int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
        int i=0, j=m-1, res=-1;
        while( i<n & j>=0){
            if(arr[i][j] == 1){
                res=i;
                j--;
            }
            if(arr[i][j]==0)
                i++;
        }
        return res;
	}
