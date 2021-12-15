#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;

	while(cin>>n>>m)
	{
		map<int,int> mp;
		int a[n]={0};
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			mp[a[i]]++;
		}
		for(int i=0;i<n;i++)
		{
			if(mp[a[i]]>=2)
			{
				cout<<mp[a[i]]-1<<endl;
			}
			else
			{
				cout<<"BeiJu"<<endl;
			}
		}
	}
	return 0;
}
