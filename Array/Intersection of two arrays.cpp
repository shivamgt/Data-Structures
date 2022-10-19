// Using unordered_map
//Time - O(n+m)
//Space - O(n)

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        unordered_map<int, int>m1, m2;
        for(auto &itr : nums1)
            m1[itr]++;
        for(auto &itr : nums2){
            if( m1.find(itr) != m1.end())
                m2[itr]++;
        }
        for(auto &itr : m2)
            v.push_back(itr.first);
        return v;
    }


//Two pointer approach
//Time - O(nlogn + mlogm)
//Space - O(1) // If we don't consider the vector for storing result

 	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int n = nums1.size();
        int m = nums2.size();
        int i=0,j=0;
        
        sort( nums1.begin(), nums1.end());
        sort( nums2.begin(), nums2.end());
        
        while( i<n && j<m ){
            if(nums1[i] == nums2[j]){
                v.push_back(nums1[i++]);
                j++;
            }
            else if(nums1[i] < nums2[j])
                i++;
            else
                j++;
        
            while(i>0 && i<n && nums1[i] == nums1[i-1]) i++;
            while(j>0 && j<m && nums2[j] == nums2[j-1]) j++;
        }
        return v;
    }
