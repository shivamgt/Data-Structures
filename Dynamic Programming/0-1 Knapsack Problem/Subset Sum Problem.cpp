#include<bits/stdc++.h>
using namespace std;

bool subset_sum(int arr[],int sum,int n)
{
	bool t[n+1][sum+1];  // DP Matrix 
	
	//Initialization  
	for(int i=0;i<=n;i++){
		for(int j=0;j<=sum;j++){
			if(i==0)
				t[i][j]=false;
			if(j==0)
				t[i][j]=true;	
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			if(arr[i-1] <=j)
				t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
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
	if(subset_sum(arr,sum,n))
		cout<<"Subset Possible";
	else
		cout<<"Subset Not Possible";
	return 0;		
}
