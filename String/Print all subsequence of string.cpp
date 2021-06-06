#include<bits/stdc++.h>
using namespace std;

void subString(string ip, string op)
{
    if(ip.empty()){
        cout<<op<<endl;
        return;
    }
    subString(ip.substr(1),op);
    subString(ip.substr(1),op+ip[0]);
}

int main()
{
    string ip = "abc";
    string op = "";
    
    subString(ip,op);
    
    return 0;
}
