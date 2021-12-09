#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
	string a;
	while(cin>>a) 
	{
		int num[10086],len=a.size(),ans=0,k=0;
		for(int i=2;i<len;i++) 
		{
			ans*=16;
			if(a[i]>='0'&&a[i]<='9')
			{
				ans+=a[i]-'0';
			}
			else
			{
				ans+=a[i]-'A'+10;//A-A+10=10,B-A+10=11...
			}	
		}
		k=0;
		while(ans!=0) 
		{
			//k++;
			num[k++]=ans%10;
			ans/=10;
		}
		for(int i=k-1;i>=0;i--)
		{
			cout<<num[i];
		}
		cout<<endl;
	}
}
