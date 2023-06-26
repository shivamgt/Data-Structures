//Time - O(nlogn)
//Space - O(1)

	int peakIndexInMountainArray(vector<int>& arr) {
       int lo=0;
       int hi=arr.size()-1;
       int mid = lo + (hi-lo)/2;

        while(lo < hi){
            if(arr[mid] <arr[mid+1])
                lo = mid+1;
            else
                hi = mid;
             mid = lo + (hi-lo)/2;    
        }
        return lo;
    }
