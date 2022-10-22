//Brute Force
// Time - O(n*n)
//Space - O(1)

int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        int maxLen = 0, sum;
        for(int i=0; i<N; i++){
            sum = 0;
            for(int j=i; j<N; j++){
                sum += A[j];
                if( sum == K)
                    maxLen = max( maxLen, j-i+1); 
            }
        }
        return maxLen;
    } 
    
//Using map
//Time - O(n)
//Space -O(n)

int lenOfLongSubarr(int A[],  int N, int K) 
    { 
	    unordered_map<int,int> ump;
	    ump[0] = -1;
        int sum = 0, maxLen = 0;
        for(int i=0; i<N; i++){
            sum += A[i];
            if(ump.find(sum) == ump.end())
                ump[sum] = i;
            if(ump.find(sum-K) != ump.end())
                maxLen = max(maxLen, i-ump[sum-K]);
        }
        return maxLen;
    }     

