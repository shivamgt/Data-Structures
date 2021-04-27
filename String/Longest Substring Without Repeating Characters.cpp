	int lengthOfLongestSubstring(string s)
    {
        int i=0,j=0,maxlen=INT_MIN;
        unordered_map<char,int>ump;
        
        if(s=="")
            return 0;
        
        while(j<s.length())
        {
            ump[s[j]]++;
            
            if(ump.size()==j-i+1)
            {
                maxlen=max(maxlen,j-i+1);
                j++;
            }
            else if(ump.size()<j-i+1)
            {
                while(ump.size()<j-i+1)
                {
                    ump[s[i]]--;
                    if(ump[s[i]]==0)
                        ump.erase(s[i]);
                    i++;
                }
                j++;
            }
        }
        return maxlen;
    }
