#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int dp[200][200]={0},v[50]={0},w[50]={0};
int main()//v is value and w is weight重量体积 
{
	int m,n;//n是可用物品，m是体积 
	while(cin>>m>>n)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>w[i]>>v[i];
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(j>=w[i])
				{
					dp[i][j]=max(dp[i-1][j],dp[i][j-w[i]]+v[i]);
				}
				else
				{
					dp[i][j]=dp[i-1][j];//跳过当前的放入 
				}
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				printf("f[%d][%d]=%d\n",i,j,dp[i][j]);
			}
		}
	}
}
