#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string arr;
	while(cin>>n>>arr)
	{
		int len=arr.size();
		int ans=0;
		for(int i=0;i<len;i++)
		{
			ans=ans*n+(arr[i]-'0');
		}
		cout<<ans<<endl;
	}
}
