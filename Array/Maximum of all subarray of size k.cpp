    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        int i=0;
        int j=0;
        vector<int>v;
        list<int>l;
        
        while(j<n)
        {
            while(l.size()>0 &&  l.back()<arr[j])
                l.pop_back();
            l.push_back(arr[j]);    
            if(j-i+1<k)
                j++;
            else if(j-i+1==k)
            {
                v.push_back(l.front());
                if(l.front()==arr[i])
                    l.pop_front();
                i++;
                j++;
            }
        }
        return v;
    }
