#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int M,ans[101],cot,t;
	while(cin>>M) 
	{
		cot=0;
		if(M==0)
		{
			cout<<"0"<<endl;
		}
		else 
		{
			while(M!=0) 
			{
				t=M%(-2);
				if(t>=0) 
				{
					ans[cot++]=t;
					M/=(-2);
				}
				else 
				{
					ans[cot++]=t+2;
					M=M/(-2)+1;
				}
			}
			for(int i=cot-1;i>=0;i--)
			{
				cout<<ans[i]; 
			}
			cout<<endl;
		}
	}
}
