//Using the concept of visited array
//Time - O(n^3)
//Space - O(1)

bool areDistinct(string s, int i, int j){
    vector<bool> visited(256);
    for(int k=i; k<=j; k++){
        if(visited[s[k]])
            return false;
        visited[str[k]]=true;    
    }
    return true;
}

int longestString( string s){
    int n = s.length(), res=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(areDistinct(s,i,j))
                res = max(res, j-i+1);
    return res;
}

//Optimising O(n^3) solution
//Time - O(n^2)
//Space - O(1)

int longestString( strong s){
    int n = s.length(), res=0;
    for(int i=0; i<n; i++){
        vector<bool> visited(256);
        for(j=i; j<n; j++){
            if(visited[s[j]])
                break;
            else{
                res = max(res, j-i+1);
                visited[str[j]] = true;
            }
        }
        return res;
    }
}

//Sliding Window (Chance of TLE)
//Time - O(n)
//Space - O(n)

int longestUniqueSubsttr(string S){
        int i=0, j=0, res=0;
        unordered_map<char, int> ump;
        while( j<S.length() ){
            ump[S[j]]++;
            
            if( ump.size()==j-i+1 ){
                res = max(res, j-i+1);
                j++;
            }
            
            else if( ump.size()<j-i+1){
                while( ump.size()<j-i+1){
                    ump[S[i]]--;
                    if( ump[S[i]]==0 )
                        ump.erase(S[i]);
                    i++;   
                }
                j++;
            }    
        }
        return res;
    }
    
//Two Pointer (Somewhat like sliding window)
//Time - O(n)
//Space - O(n)

int longestUniqueSubsttr(string S){
       int n=S.length(), i=0, j=0, mx=INT_MIN;
       int m[26] = {0};
       
       while(j<n){
           m[S[j]-'a']++;
           if(m[S[j]-'a'] > 1){
               while(m[S[j]-'a']>1){
                   m[S[i]-'a']--;
                   i++;
               } 
           }
            mx = max(mx, j-i+1);
            j++;
       }
        return mx;
    }    
    
//Using the concept of visited array 
//Time - O(n)
//Space - O(256)

int longestUniqueSubsttr(string S){
       int n=S.length(), res=0;
       vector<int> prev(256, -1);
       int i=0;
       for(int j=0; j<n; j++){
           i = max(i, prev[S[j]]+1);
           res = max(res, j-i+1);
           prev[S[j]] = j;
       }
       return res;
    }    
