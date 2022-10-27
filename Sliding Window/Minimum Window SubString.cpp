//Sliding Window hard question
//Time - O(n)
//Space - O(1)

string smallestWindow (string s, string p)
    {
        int i=0, j=0, count=0;
        int start=0, len=INT_MAX;
        int n = s.length(), m = p.length();
        
        if( n<m )
            return "-1";
        
        unordered_map<char, int> pmap;
        for(int i=0; i<m; i++)
            pmap[p[i]]++;
        count = pmap.size();
        
        while( j<n ){
            if(pmap.find(s[j])!=pmap.end()){
                pmap[s[j]]--;
                if( pmap[s[j]] == 0 )
                    count--;
            }   
            if( count==0 ){
                while( count==0 ){
                    if( len>j-i+1 ){
                        len = min(len, j-i+1);
                        start=i;
                    }
                    if(pmap.find(s[i])!=pmap.end()){
                        pmap[s[i]]++;
                        if( pmap[s[i]]>0 )
                            count++;
                    }
                    i++;    
                }
            }
            j++;
        }
        if( len != INT_MAX)
            return s.substr(start, len);
        else
            return "-1";
    }
