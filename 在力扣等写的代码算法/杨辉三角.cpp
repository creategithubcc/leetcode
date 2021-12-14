#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int a[100][100]={0};

void func(int n)
{ 
	for(int i=0,j=1;i<n-1;i++)//先全部初始化1，开端和末端 
	{
		a[i][0]=1;
		a[i][j]=1;
		j++;
	}
	for(int i=1;i<n-1;i++)
	{
		for(int j=1;j<i+1;j++)//然后就是前面相加得出后面 
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	
}
int main()
{
	int n;
	while(cin>>n)
	{
		func(n);
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<i+2;j++)
			{
				cout<<a[i][j]<<" ";
			}cout<<endl;
		}
	}
	return 0;
}
