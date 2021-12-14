#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int ans[30][30]={0};
int main()
{
	int n,w=1;
	while(cin>>n)
	{
		if(n%2==1)//奇数 
		{
			ans[n/2][n/2]=n*n;//5/2=2.5,所以2是中心，从零开始的话0.1.2.3.4 
		}
		for(int i=0;i<n/2;i++)//每次都是剪掉边缘2行，所以最终答案是/2 
		{
			for(int j=i;j<n-i;j++)//1->n-1
			{
				ans[j][i]=w;//下 
				w++;
			}
			for(int j=i+1;j<n-i;j++)//右 
			{
				ans[n-i-1][j]=w;
				w++;
			}
			for(int j=n-i-2;j>i-1;j--)//上 
			{
				ans[j][n-i-1]=w;
				w++;
			}
			for(int j=n-i-2;j>i;j--)//左 
			{
				ans[i][j]=w;
				w++;
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				printf("%-3d ",ans[i][j]);//-3d代表左对齐3位数 
			}
			cout<<endl;
		}
	}
	return 0;
}
