#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int ans[4][4]={0};
int main()
{
	int n,t,k;
	while(cin>>n)
	{
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				cin>>ans[i][j];
			} 
		}
		switch(n)
		{
			case 1://上 
				for(int i=0;i<4;i++)//遍历列 
				{
					for(int j=1;j<4;j++)//遍历行 
					{
						if(ans[j][i]!=0)
						{
							t=ans[j][i];
							for(k=j-1;k>=0;k--)
							{
								if(ans[k][i]!=0)
								{
									break;
								}
							}
							ans[j][i]=0;
							ans[k+1][i]=t;
							if(ans[k+1][i]==ans[k][i]&&k>=0)
							{
								ans[k][i]+=ans[k+1][i];
								ans[k+1][i]=0;
							}
						}
					}
				} 
				break;
			case 2://下 
				for(int i=0;i<4;i++)
				{
					for(int j=2;j>=0;j--)
					{
						if(ans[j][i]!=0)
						{
							t=ans[j][i];
							for(k=j+1;k<4;k++)
							{
								if(ans[k][i]!=0)
								{
									break;
								}
							}
							ans[j][i]=0;
							ans[k-1][i]=t;
							if(ans[k-1][i]==ans[k][i]&&k<4)
							{
								ans[k][i]+=ans[k-1][i];
								ans[k-1][i]=0;
							}
						}
					}
				} 
				break;
			case 3://左 
				for(int i=0;i<4;i++)//遍历行 
				{
					for(int j=1;j<4;j++)//遍历列 
					{
						if(ans[i][j]!=0)
						{
							t=ans[i][j];
							for(k=j-1;k>=0;k--)
							{
								if(ans[i][k]!=0)
								{
									break;
								}
							}
							ans[i][j]=0;
							ans[i][k+1]=t;
							if(ans[i][k+1]==ans[i][k]&&k>=0)
							{
								ans[i][k]+=ans[i][k+1];
								ans[i][k+1]=0;
							}
						}
					}
				} 
				break;
			case 4://右 
				for(int i=0;i<4;i++)//遍历行 
				{
					for(int j=2;j>=0;j--)//遍历列 
					{
						if(ans[i][j]!=0)
						{
							t=ans[i][j];
							for(k=j+1;k<4;k++)
							{
								if(ans[i][k]!=0)
								{
									break;
								}
							}
							ans[i][j]=0;
							ans[i][k-1]=t;
							if(ans[i][k-1]==ans[i][k]&&k<4)
							{
								ans[i][k]+=ans[i][k-1];
								ans[i][k-1]=0;
							}
						}
					}
				} 
				break;
		}
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				cout<<ans[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
