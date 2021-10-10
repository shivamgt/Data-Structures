//Time - O(2n)
//Space - O(n) 	
 	
	int lengthOfLongestSubstring(string s)
    {
        int i=0;
        int j=0;
        int maxLen = INT_MIN;
        unordered_map<char,int>ump;
        
        if(s.empty())
            return 0;
        
        while(j<s.length())
        {
            ump[s[j]]++;
            if( ump.size() == j-i+1 )
            {
                maxLen = max(maxLen, j-i+1);
                j++;
            }
            else if( ump.size() < j-i+1 )
            {
                while( ump.size() < j-i+1 )
                {
                    ump[s[i]]--;
                    if( ump[s[i]] == 0 )
                        ump.erase(s[i]);
                    i++;
                }
                j++;
            }
        }
        return maxLen;
    }
    
//Time - O(2^n)
//Space - O(n)

	int lengthOfLongestSubstring(string s)
    {
        int left=0;
        int right=0;
        int maxLen=0;
        int n=s.size();
        vector<int> mpp(256,-1);
        
        while(right<n)
        {
            if( mpp[s[right]] != -1 )
                left = max(mpp[s[right]]+1, left);
            
            mpp[s[right]]=right;
            
            maxLen = max(maxLen, right-left+1);
            right++;
        }
        return maxLen;
    }	   
