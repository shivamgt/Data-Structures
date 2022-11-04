//Sliding Window
//Time - O(N)
//Space - O(N)	
	
	int search(string pat, string txt) {
	    int i=0, j=0, ans=0;
	    unordered_map<char, int> ump;
	    int k = pat.size();
	    for(int i=0; i<k; i++)
	        ump[pat[i]]++;
	    int count = ump.size();
	    
	    while(j < txt.size() ){
	        if( ump.find(txt[j]) != ump.end()) {
	            ump[txt[j]]--;
	            if( ump[txt[j]] == 0)
	                count--;
	        }
	        if( j-i+1 < k )
	            j++;
            else if( j-i+1 == k ){
                if( count == 0)
                     ans++;
                if( ump.find(txt[i]) != ump.end()) {
                    if( ump[txt[i]] == 0)
                        count++;
                    ump[txt[i]]++;
                }
                i++;j++;
            }
	    }
	    return ans;
	}	
