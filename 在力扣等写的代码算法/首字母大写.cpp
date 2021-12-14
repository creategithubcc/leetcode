#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	while(cin>>str)
	{
		int len=str.size();
		for(int i=0;i<len;i++)
		{
			if(i==0&&(str[i]<='z'&&str[i]>='a'))
			{
				str[i]-=32;
			}
			else if(str[i]==' '||str[i]=='\n'||str[i]=='\r'||str[i]=='\t')
			{
				if(str[i+1]>='a'&&str[i+1]<='z')
				{
					str[i+1]-=32;
				}
			}
			cout<<str[i];
		}
		cout<<" ";
	}
	return 0;
}
