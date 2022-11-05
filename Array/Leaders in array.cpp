//Time - O(n)
//Space - O(n)

    vector<int> leaders(int a[], int n){
        vector<int> res;
        int mx = a[n-1];
        res.push_back(mx);
        for(int i=n-2; i>=0; i--){
            if(a[i] >= mx){
                res.push_back(a[i]);
                mx = a[i];
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
