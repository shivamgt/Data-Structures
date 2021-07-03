#include<bits/stdc++.h>
using namespace std;

int minDiff(int arr[],int key,int n)
{
	int start = 0;
	int end = n-1;
	
	while(start<=end)
	{
		int mid = start + (end-start)/2;
		if(arr[mid]==key)
			return 0;
		else if(arr[mid]>key)
			end=mid-1;
		else
			start=mid+1;		
	}
	int min1 = abs(arr[start]-key);
	int min2 = abs(arr[end]-key);
	
	int res = min(min1,min2);
	
	return res;
}

int main()
{
    int arr[]={1,3,8,10,15};
    int key=12;
    int ans = minDiff(arr,key,5);
    cout<<ans;
}
