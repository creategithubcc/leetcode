#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
	char abc[27]={'a','b','c','d',
					'e','f','g','h','i','j',
					'k','l','m','n','o','p',
					'q','r','s','t','u','v',
					'w','x','y','z'};
	char str[101]={};		
	while(cin>>str)
	{
		int len=strlen(str);
		int ans=0,cot,flag;
		for(int j=0;j<len;j++)
		{
			for(int i=0;i<26;i++)
			{
				if(str[j]==abc[i])
				{
					if(i>=15&&i<=18)
					{
						if(cot==15||cot==16||cot==17||cot==18)
						{
							ans+=2;
						}
						ans+=((i+1)%4)+1;
					}
					else if(i>=19&&i<=21)
					{
						if(cot==19||cot==20||cot==21)
						{
							ans+=2;
						}
						ans+=((i-1)%3)+1;
					}
					else if(i>=22&&i<=25)
					{
						if(cot==22||cot==23||cot==24||cot==25)
						{
							ans+=2;
						}
						ans+=((i+2)%4)+1;
					}
					else
					{
						if(j!=0)
						{
							flag=cot/3; 
							flag=3*flag;
							if(i==flag||i==(flag)+1||i==(flag)+2)
							{
								ans+=2;
							}
						}
						ans+=(i%3)+1;
					}
					cot=i;
					break;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
