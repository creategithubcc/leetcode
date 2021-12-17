#include<iostream>
#include<bits/stdc++.h>
using namespace std;
map<char,char> mp;
int main()
{
	string str;
	mp['(']='$',mp[')']='?';
	while(cin>>str)
	{
		stack<char>arr;
		stack<int>t;
		int len=str.size();
		string str2[len];
		for(int i=0;i<len;i++)
		{
			if(str[i]!='('&&str[i]!=')')
			{
				str2[i]=' ';
				continue;
			}
			if(!arr.empty())
			{
				if(arr.top()=='('&&str[i]==')')
				{
					str2[i]=' ';
					str2[t.top()]=' ';
					t.pop();
					arr.pop();
				}
				else
				{
					str2[i]=mp[str[i]];
					arr.push(str[i]);
					t.push(i);
				}
			}
			else
			{
				str2[i]=mp[str[i]];
				arr.push(str[i]);
				t.push(i);
			}
		}
		cout<<str<<endl;
		for(int i=0;i<len;i++)
		{
			cout<<str2[i];
		}cout<<endl;
	}
	return 0;
}
