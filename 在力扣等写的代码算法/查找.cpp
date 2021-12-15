#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	int a[100]={0},b[100]={0};
	while(cin>>n)
	{
		int flag=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cin>>m;
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
		}
		for(int i=0;i<m;i++)
		{
			flag=0;
			for(int j=0;j<n;j++)
			{
				if(a[j]==b[i])
				{
					cout<<"YES"<<endl;
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				cout<<"NO"<<endl;
			}
		}
	}
}
