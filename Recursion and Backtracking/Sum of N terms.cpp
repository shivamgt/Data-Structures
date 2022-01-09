//Parameterized Recursive Function 

#include <iostream>
using namespace std;

void fun(int i, int sum) {
   if( i < 0){
       cout<< sum;
       return;
   }
   fun(i-1, sum+i);
}

int main() {
    fun(2, 0);
    return 0;
}

// Functional Recursion

#include <iostream>
using namespace std;

int fun(int n) {
   if( n == 0){
       return 0;
   }
   return n + fun(n-1);
}

int main() {
    cout<< fun(5);
    return 0;
}
