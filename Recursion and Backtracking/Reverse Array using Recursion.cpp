#include<bits/stdc++.h>
using namespace std;

void fun(int arr[], int l, int r){
    if(l<r){
        swap(arr[l],arr[r]);    
        fun(arr, l+1, r-1);    
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    fun(arr,0,n-1);
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
