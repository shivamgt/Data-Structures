#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int lo, int hi){
    int i = lo;
    int j = hi;
    int pivot = arr[i];
    
    while(i<j){
        while( i<j && arr[i] <= pivot)
            i++;
        while( i<=j && arr[j] > pivot)
            j--;
        if(i<j)
            swap(arr[i],arr[j]);
    }
    swap(arr[lo], arr[j]);
    return j;
}

void quickSort(int arr[], int lo, int hi){
    if(lo < hi){
        int pivot = partition(arr, lo, hi);
        quickSort(arr, lo, pivot-1);
        quickSort(arr, pivot+1, hi);
    }
}

int main() {
    
    int n = 5;
    int arr[] = {5,4,3,2,1};
    quickSort(arr, 0, n);
    
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    
    return 0;
}
