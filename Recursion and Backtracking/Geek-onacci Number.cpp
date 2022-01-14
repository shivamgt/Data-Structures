//Geek-onacci Number

#include <bits/stdc++.h>
using namespace std;

int solve( int a, int b, int c, int n){
    if( n == 1 )
        return a;
    if( n == 2 )
        return b;
    if( n == 3 )
        return c;
        
    int last = solve( a ,b ,c, n-1 );
    int sLast = solve( a, b, c, n-2 );
    int tLast = solve( a, b, c, n-3);
    
    return last + sLast + tLast; 
}

int main() {

	int t;
	cin>>t;
	while(t--){
	    int a,b,c,n;
	    cin>>a>>b>>c>>n;
	    cout<< solve(a, b, c, n) << endl;
	}
	return 0;
}
