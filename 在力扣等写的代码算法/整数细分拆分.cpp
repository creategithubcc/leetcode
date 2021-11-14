#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
求将正整数n无序拆分成最大数为k的拆分方案个数，不重复 
https://www.bilibili.com/video/BV1E64y1r7Kv?from=search&seid=17173515995194579996&spm_id_from=333.337.0.0
*/
int main()
{
	int dp[10][10]={0};
	int n,k;
	while(cin>>n>>k)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=k;j++)
			{
				if(i==1||j==1)
				{
					dp[i][j]=1;
				}
				else if(i<j)
				{
					dp[i][j]=dp[i][i];
				}
				else if(i==j)
				{
					dp[i][j]=dp[i][j-1]+1;
				}
				else
				{
					dp[i][j]=dp[i][j-1]+dp[i-j][j];
				}
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=k;j++)
			{
				cout<<"dp["<<i<<"]["<<j<<"]="<<dp[i][j]<<endl;
			}
		}
	}
}
