#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[4]={};
	while(cin>>str)
	{
		for(int i=3;i>=0;i--)
		{
			cout<<str[i];
		}
		cout<<endl; 
	}
}
