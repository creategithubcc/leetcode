#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	char a[256];
	map<char,int>mp;
	mp['<']=1,mp['(']=2,mp['[']=3,mp['{']=4;
	cin>>n;
	int j=0;
	while(cin>>a)
	{
		stack<char>arr;
		int len=strlen(a);
		for(int i=0;i<len;i++)
		{
			if(!arr.empty())
			{
				char aa=arr.top(),bb=a[i];
				if(mp[aa]<mp[bb])
				{
					goto loop;
				}
				if(arr.top()=='('&&a[i]==')'||arr.top()=='['&&a[i]==']'||arr.top()=='<'&&a[i]=='>'||arr.top()=='{'&&a[i]=='}')
				{
					arr.pop();
				}
				else
				{
					arr.push(a[i]);
				}
			}
			else
			{
				arr.push(a[i]);
			}
		}
		if(arr.empty())
		{
			cout<<"YES"<<endl; 
		}
		else
		{
			loop:
			cout<<"NO"<<endl;
		}
		if(j<n-1)
		{
			j++;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}
