#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,ans=0;
	while(cin>>n)
	{
		ans=0;
		for(int i=2;i*i<=n;i++)
		{
			while(n%i==0)
			{
				ans++;
				n/=i;
			}
		}
		if(n>1)
		{
			ans++;
		}
		cout<<ans<<endl;
	}
}
