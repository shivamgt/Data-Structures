	int maximumSumSubarray(int K, vector<int> &Arr , int N)
    {
        int sum=0;
        int i=0;
        int j=0;
        int mx=INT_MIN;
        while(j<Arr.size())
        {
            sum+=Arr[j];
            if(j-i+1<K)
                j++;
            else if(j-i+1==K)
            {
                mx = max(mx,sum);
                sum-=Arr[i];
                i++;
                j++;
            }
        }
        return mx;
    }
