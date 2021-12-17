#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	char a[308];
	while(cin>>a)
	{
		stack<char>arr;
		int len=strlen(a);
		for(int i=0;i<len;i++)
		{
			if(!arr.empty())
			{
				char b=arr.top();
				if(a[i]==')'&&b=='('||a[i]==']'&&b=='[')
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
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
