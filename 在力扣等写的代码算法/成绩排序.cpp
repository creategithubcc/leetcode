#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sno[101]={},sco[101]={};
	int n,t;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>sno[i];
			cin>>sco[i];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-i-1;j++)
			{
				if(sco[j]>sco[j+1])
				{
					t=sco[j];
					sco[j]=sco[j+1];
					sco[j+1]=t;
					t=sno[j];
					sno[j]=sno[j+1];
					sno[j+1]=t;
				}
				else if(sco[j]==sco[j+1])
				{
					if(sno[j]>sno[j+1])
					{
						t=sno[j];
						sno[j]=sno[j+1];
						sno[j+1]=t;
						t=sco[j];
						sco[j]=sco[j+1];
						sco[j+1]=t;
					}
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<sno[i]<<" "<<sco[i]<<endl;
		}
	}
	return 0;
}
