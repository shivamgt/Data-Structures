#include<iostream>
using namespace std;

void merge(int arr[], int l,int mid,int r)
{
	int i=l;
	int j=mid+1;
	int k=l;
	int brr[r+1];

	while(i<=mid && j<=r)
	{
		if(arr[i]<arr[j])
			brr[k++]=arr[i++];
		else
			brr[k++]=arr[j++];
	}
	for(;i<=mid;i++)
		brr[k++]=arr[i];
	for(;j<=mid;j++)
		brr[k++]=arr[j];
		
	for(i=l;i<=r;i++)
		arr[i]=brr[i];
}

void mergeSort(int arr[], int l, int r)
{
	if(l<r)
	{
		int mid = (l+r)/2;
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,r);
		merge(arr,l,mid,r);
	}
}

void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
        cout <<arr[i]<< " ";
}

int main()
{
	int arr[] = {5,4,3,2,1};
	int n =sizeof(arr)/sizeof(arr[0]);
	
	mergeSort(arr,0,n-1);
	printArray(arr,n);
	
	return 0;
}

