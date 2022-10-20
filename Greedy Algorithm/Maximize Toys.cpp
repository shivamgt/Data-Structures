//Time - O(nlogn)
//Space - O(1)

int toyCount(int N, int K, vector<int> arr)
    {
        int count=0, sum=0;
        sort(arr.begin(), arr.end());
        for(int i=0; i<N; i++){
            sum +=arr[i];
            if( sum <= K)
                count++;
            else 
                break;
        }
        return count;
    }
