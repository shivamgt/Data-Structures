//Using Map
//Time - O(n)
//Space -O(n)

int search(int A[], int N){
	    int res=-1;
	    unordered_map<int,int> ump;
	    for(int i=0; i<N; i++)
	        ump[A[i]]++;
	        
	    for(auto itr: ump)
	        if( itr.second == 1)
	            res = itr.first;
	    return res;
	}
	
//Using XOR operator
//Time - O(n)
//Space - O(1)

	int search(int A[], int N){
	    int res=0;
	    for(int i=0; i<N; i++)
	        res ^= A[i];
	   return res;
	}	
	
//Using Binary Search
//Time - O(logn)
//Space - O(1)

int singleNonDuplicate(vector<int>& nums) {
        int left=0, right=nums.size()-1;
        while( left<right ){
            int mid = left + (right-left)/2;
            int temp = mid%2==0? mid+1:mid-1; // OR temp = mid^1;
            if( nums[mid] == nums[temp])
                left = mid+1;
            else
                right = mid;
        }
        return nums[left];
    }	
