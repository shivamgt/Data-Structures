//Time - O(n*k)
//Space - O(1)

#include <bits/stdc++.h>
using namespace std;

vector <int> max_of_subarrays(int *arr, int n, int k){
        int maxK;
        vector<int> v;
        for(int i=0; i<n-k+1; i++){
            int maxK = arr[i];
            for(int j=i+1; j<i+k; j++){
                maxK = max(maxK, arr[j]);
            }
            v.push_back(maxK);
        }
        return v;
    }

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int K = 3;
    printKMax(arr, N, K);
    return 0;
}

//Sliding Window
//Time - O(n)
//Space - O(n)

vector <int> max_of_subarrays(int *arr, int n, int k){
        int i=0;
        int j=0;
        vector<int> v;
        list<int>l;
        
        while(j<n){
            while(l.size() > 0 && l.back() < arr[j])
                l.pop_back();
            l.push_back(arr[j]);
            if(j-i+1 < k)
                j++;
            else if(j-i+1 == k){
                 v.push_back(l.front());
                 if(l.front() == arr[i])
                    l.pop_front();
                i++;
                j++;
            }
        }
        return v;
    }


