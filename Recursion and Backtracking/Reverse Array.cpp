#include <iostream>
using namespace  std;

void fun(int arr[], int l, int r) {
    if(l >= r)
        return;
    swap(arr[l], arr[r]);
    fun(arr, l+1, r-1);
}

int main() {
    
    int arr[] = {1, 2, 3, 4, 5};
    
    fun( arr, 0, 5);
    
    for(int i=1; i <= 5; i++)
        cout<< arr[i]<< " ";

    return 0;
}

// One variable

#include <iostream>
using namespace  std;

void fun(int arr[], int i, int n) {
    if(i >= n/2)
        return;
    swap(arr[i], arr[n-i-1]);
    fun(arr, i+1, n);
}

int main() {
    
    int arr[] = {1, 2, 3, 4, 5};
    
    fun( arr, 0, 5);
    
    for(int i=0; i < 5; i++)
        cout<< arr[i]<< " ";

    return 0;
}
