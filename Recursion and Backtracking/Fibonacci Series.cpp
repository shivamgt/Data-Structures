//Time - O(2^n)

#include <iostream>
using namespace std;

int fun(int n){
    if( n <= 1)
        return n;
    int last = fun(n-1);
    int slast = fun(n-2);
    
    return last + slast;
}

int main() {

    cout<<fun(4);
    return 0;
}
