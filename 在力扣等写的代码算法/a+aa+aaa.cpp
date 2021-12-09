#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	 int a,n,ans=0,t;
	 while(cin>>a>>n)
	 {
	 	t=a;
	 	for(int i=0;i<n;i++)
	 	{
		 	ans+=a;
		 	t*=10;
		 	a+=t;
		 }
		 cout<<ans<<endl; 
	 }
}
