#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,ans=0;
	while(cin>>m)
	{
		if(m<=100000)
		{
			ans=m*0.1;
		}
		else if(m<=200000)
		{
			m-=100000;
			ans=m*0.075+10000;
		}
		else if(m<=400000)
		{
			m-=200000;
			ans=10000+100000*0.075+m*0.05;
		}
		else if(m<=600000)
		{
			m-=400000;
			ans=10000+100000*0.075+200000*0.05+m*0.03;
		}
		else if(m<=1000000)
		{
			m-=600000;
			ans=10000+100000*0.075+200000*0.05+200000*0.03+m*0.015;
		}
		else
		{
			m-=1000000; 
			ans=10000+100000*0.075+200000*0.05+200000*0.03+400000*0.015+m*0.01;
		}
		cout<<ans<<endl;
	}
	
}
