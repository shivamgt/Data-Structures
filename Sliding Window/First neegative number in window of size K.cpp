//Brute Force
//Time - O(N^2)
//Space - O(1)

vector<long long> printFirstNegativeInteger(long long int A[],
                                            long long int N, long long int K) {
    vector<long long> res;
    bool flag;
    
    for(int i=0; i<N-K+1; i++){
        flag = false;
        for(int j=i; j<i+K; j++){
            if(A[j] < 0){
                res.push_back(A[j]);
                flag = true;
                break;
            }
        }
        if(!flag)
            res.push_back(0);
    }
    return res;                                                   
}

// Sliding Window
// Time - O(N)
// Space - O(N)

vector<long long> printFirstNegativeInteger(long long int A[],
                                            long long int N, long long int K) {
    long long i = 0, j = 0;
    vector<long long> res;
    queue<long long> q;
    
    while( j < N ){
        if( A[j] < 0 )          //Calcualtion
            q.push(A[j]);
        if( j-i+1 < K)
            j++;
        else if( j-i+1 == K ){
            if( q.empty() )
                res.push_back(0);
            else{
                res.push_back(q.front());
                if(A[i] == q.front())
                    q.pop();
            }    
            i++;
            j++;
        }    
    }
    return res;                                     
 }
