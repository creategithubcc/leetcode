#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=n-1;i>=0;i--)//i--¾Íµ¹Ðò 
		{
			for(int j=1;j<n-i;j++)
			{
				cout<<" ";
			}
			for(int j=0;j<i*2+1;j++)
			{
				cout<<"*";
			} 
			cout<<endl;
		} 
	} 
}
