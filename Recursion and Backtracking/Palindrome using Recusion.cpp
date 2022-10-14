#include <bits/stdc++.h>
using namespace std;

bool palindrome(string str, int i){
    if(i > str.size()/2)
        return true;
    if( str[i] != str[str.size()-i-1])
        return false;
    palindrome(str, i+1);
}

int main() {
    
    string str = "ABCDCBA";
    bool res = palindrome(str, 0);
    
    if(res) cout<<"Palindrome";
    else cout<<"Not Palindrome";

    return 0;
}
