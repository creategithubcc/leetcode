#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char math[10]={'0','1','2','3','4','5','6','7','8','9'};
int main()
{
	string str,atr2,math2;
	while(cin>>str)
	{
		int len=str.size();
		int len2=len;
		for(int i=0,t,k;i<len;i++)
		{
			for(int j=0;j<10;j++)
			{
				if(str[i]==math[j])
				{
					t=str[i];
					for(k=i;k<len2;k++)
					{
						str[k]=str[k+1];
					}
					str[k-1]=t;
					i--;
					len--;
					break;
				}
			}
		}
		for(int i=0;i<len2;i++)
		{
			cout<<str[i];
		}cout<<endl;
	}
	return 0;
	
}
