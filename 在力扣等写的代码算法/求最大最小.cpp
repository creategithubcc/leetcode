#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t=0,n,ans[10001]={};
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
		{
			cin>>ans[i];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-i-1;j++)
			{
				if(ans[j]>ans[j+1])
				{
					t=ans[j];
					ans[j]=ans[j+1];
					ans[j+1]=t;
				}
			}
		}
		cout<<ans[n-1]<<" "<<ans[0]<<endl;
	}
}
