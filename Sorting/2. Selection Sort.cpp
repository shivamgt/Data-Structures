#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int lo, int n){
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min])
                min = j;
        }
        swap(arr[i],arr[min]);
    }
}

int main() {
    
    int arr[] = {5,4,3,2,1,100,0};
    int n=7;
    selectionSort(arr,0,n);
    
    for(int i=0; i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
