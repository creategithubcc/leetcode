#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int ans[1001]={0};
int main()
{
	int n,m;
	while(cin>>n)
	{
		int cot=0;
		for(int i=0;i<n;i++)
		{
			cin>>ans[i];
		}
		stable_sort(ans,ans+n);
		cin>>m;
		for(int i=0;i<n;i++)
		{
			if(ans[i]!=ans[i+1])
			{
				cot++;
				if(cot==m)
				{
					cout<<ans[i]<<endl;
				}
			}
		}
	}
	return 0;
}
