#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,flag;
	while(cin>>n)
	{
		if(n<=1)
		{
			cout<<"no"<<endl;
		}
		else
		{
			flag=0;
			for(int i=2;i<sqrt(n);i++)
			{
				if(n%i==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				cout<<"yes"<<endl;
			}
			else
			{
				cout<<"no"<<endl;	
			}
		}
	}
	return 0;
}
