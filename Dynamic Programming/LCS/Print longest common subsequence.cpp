string lcs(string a, string b, int m, int n)
{
	int t[m+1][n+1];
	int i=m;
	int j=n;
	string s="";
	
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0 || j==0)
				t[i][j]=0;
		}
	}
	
	while(i>0 && j>0)
	{
		if(a[i-1] == b[j-1])
		{
			s.push_back(a[i-1]);
			i--;
			j--;
		}
		else{
			if(t[i][j-1] > t[i-1][j])
				j--;
			else
				i--;	
		}
	}
	reverse(s.begin(),s.end());
	return s;
}

