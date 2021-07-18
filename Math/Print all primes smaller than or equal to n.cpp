#include<bits/stdc++.h>
using namespace std;

void seo(int n)
{
	bool prime[n+1];
	memset(prime,true,sizeof(prime));

	for(int i=2; i <= sqrt(n) ;i++)
	{
		if(prime[i])
			for(int j=i*i;j<=n; j=j+i)
				 prime[j] = false;
	}
	for(int i=2;i<=n;i++)
		if(prime[i])
			cout<<i<<" ";
}

int main()
{
	int n;
	cin>>n;
	seo(n);
	return 0;
}


