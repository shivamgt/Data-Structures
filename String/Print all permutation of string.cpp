 		vector<string> k;
	    void solve(string s, int l,int r)
	    {
	        if(l==r)
	            k.push_back(s);
	        for(int i=l;i<=r;i++)
	        {
	            swap(s[l],s[i]);
	            solve(s,l+1,r);
	           // swap(s[l],s[i]);
	        }
	    }
	
		vector<string>find_permutation(string S)
		{
		    solve(S,0,S.length()-1);
		    sort(k.begin(),k.end());
		    return k;
		}

