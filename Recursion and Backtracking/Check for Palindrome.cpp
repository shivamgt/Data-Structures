//Time - O(n/2)
//Space - O(n/2)

#include <iostream>
using namespace  std;

bool fun(string &str,int i) {
	
    int n = str.size();
    if( i >= n/2 )
        return true;;
    if( str[i] !=  str[n-i-1] )
        return false;
    return fun( str, i+1);    
}

int main() {

    string str = "MADAM";
    cout<<fun(str,0);
    return 0;
}
