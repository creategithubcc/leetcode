#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int t=0,n,arr[100]={};
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
		for(int j=0;j<n;j++)
		{
			cout<<arr[j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
