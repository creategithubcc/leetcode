#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int t[108][108]={0};

void shunshizhen(int a[108][108],int m,int n)//顺时针反转 
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			t[j][m-1-i]=a[i][j];
		}
	}
	for(int i=0;i<108;i++)
	{
		for(int j=0;j<108;j++)
		{
			a[i][j]=t[i][j];
		}
	}
}
void nishizhen(int a[108][108],int m,int n)//中间抽对称反转 
{
	//int t[108][108]={0};
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			t[i][n-1-j]=a[i][j];
		}
	}
	for(int i=0;i<108;i++)
	{
		for(int j=0;j<108;j++)
		{
			a[i][j]=t[i][j];
		}
	}
}
void zhouduicheng(int a[108][108],int m,int n)//逆时针反转 
{
	//int t[108][108]={0};
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			t[n-1-j][i]=a[i][j];
		}
	}
	for(int i=0;i<108;i++)
	{
		for(int j=0;j<108;j++)
		{
			a[i][j]=t[i][j];
		}
	}
}
int main()
{
	int m,n,k,cot=0,tmm,tn;
	int a[108][108]={0},array[108]={};
	while(cin>>m>>n>>k)
	{
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
			}
		}
		for(int i=0;i<k;i++)
		{
			cin>>array[i];
		}
		cot=0;
		tmm=m,tn=n;
		for(int i=0;i<k;i++)
		{
			m=(cot%2)?tn:tmm;
			n=(cot%2)?tmm:tn;
			if(array[i]==1)
			{
				shunshizhen(a,m,n);
				cot++;
			}
			else if(array[i]==2)
			{
				nishizhen(a,m,n);
			}
			else if(array[i]==3)
			{
				zhouduicheng(a,m,n);
				cot++;
			}
		}
		if(cot%2)
		{
			for(int i=0;i<tn;i++)
			{
				for(int j=0;j<tmm;j++)
				{
					cout<<a[i][j]<<" ";
				}
				cout<<endl;
			}
		}
		else
		{
			for(int i=0;i<tmm;i++)
			{
				for(int j=0;j<tn;j++)
				{
					cout<<a[i][j]<<" ";
				}
				cout<<endl;
			}
		}
	}
}
