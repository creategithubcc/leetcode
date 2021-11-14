#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;


int main()
{
	int maxArea[10086]={},ans=0,p=0,q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		cin>>maxArea[i];
	}
	q--;
	while(p<q)
	{
		//ans=maxArea[p]<maxArea[q] ? max(ans,(q-p) * maxArea[p++]):max(ans,(q-p) * maxArea[q--]);
		if(maxArea[p]<maxArea[q])
		{
			ans=max(ans,(q-p) * maxArea[p++]);//p++,先用p在p+1，++p，先p+1在用新赋值的p 
		}
		else
		{
			ans=max(ans,(q-p) * maxArea[q--]);
		}
	}
	cout<<ans<<endl;
}
