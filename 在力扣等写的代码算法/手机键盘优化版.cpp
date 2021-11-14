#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
	char abc[27]={'a','b','c','d','e',
				  'f','g','h','i','j',
				  'k','l','m','n','o',
				  'p','q','r','s','t',
				  'u','v','w','x','y','z'};	
	char str[101]={};		
	while(cin>>str)
	{
		int len=strlen(str);
		int ans=0,key=-1,re=-1,sum;
		for(int i=0;i<len;i++)
		{
			sum=str[i]-abc[0];
			if(str[i]>=abc[22])
			{
				key=7;
				ans+=(str[i]+1-abc[22]);
			}
			else if(str[i]>=abc[19])
			{
				key=6;
				ans+=(str[i]+1-abc[19]);
			}
			else if(str[i]>=abc[15])
			{
				key=5;
				ans+=(str[i]+1-abc[15]);
			}
			else
			{
				key=sum/3;
				ans+=(sum%3+1);
			}
			if (key==re) 
			{
				ans+=2;
			}
			re=key;
		}
		cout<<ans<<endl;
	}
}
