	int longestKSubstr(string s, int k)
    {
        int i=0,j=0;
        int maxlen=INT_MIN;
        unordered_map<char,int>ump;
        while(j<s.length())
        {
            ump[s[j]]++;

            if(ump.size()<k)
                j++;
            
            else if(ump.size()==k)
            {
                maxlen=max(maxlen,j-i+1);
                j++;
            }
            else if(ump.size()>k)
            {
                while(ump.size()>k)
                {
                    ump[s[i]]--;
                    if(ump[s[i]]==0)
                        ump.erase(s[i]);
                    i++;    
                }
                j++;
            }
        }
        if(ump.size()<k)
            return -1;
        return maxlen;
    }
