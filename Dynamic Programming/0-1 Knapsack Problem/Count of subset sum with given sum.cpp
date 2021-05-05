#include<bits/stdc++.h>
using namespace std;

int countSubsetSum(int arr[],int sum,int n)
{
	int t[n+1][sum+1]; //DP Matrix
	
	//Initialization
	for(int i=0;i<=n;i++){
		for(int j=0;j<=sum;j++){
			if(i==0)
				t[i][j]=0;
			if(j==0)
				t[i][j]=1;	
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			if(arr[i-1]<=j)
				t[i][j]= t[i-1][j-arr[i-1]] + t[i-1][j];
			else
				t[i][j]=t[i-1][j];
		}
	}
	return t[n][sum];	
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int sum;
	cin>>sum;
	cout<<countSubsetSum(arr,sum,n);
	return 0;	
}
