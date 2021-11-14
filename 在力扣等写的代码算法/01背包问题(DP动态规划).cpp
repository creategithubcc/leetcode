#include<iostream>
#include<cstring>
#include<bits/stdc++.h> 
using namespace std;

int f[5][9]={};//总共4个物品容量为8，01背包 
int l[20]={0};
int w[5]={0,2,3,4,5};//每个物品的重量 
int v[5]={0,3,4,5,8};//每个物品的价值 
int main()
{
	memset(f,0,sizeof(f));
	for(int i=1;i<5;i++)//循环物品编号 
	{
		for(int j=1;j<9;j++)//循环背包容量的重量 
		{
			if(w[i]>j)//如果i物品的重量比当前容量多 
			{
				 f[i][j]=f[i-1][j];//跳过当前的放入 
			}
			else
			{
				f[i][j]=max(f[i-1][j-w[i]]+v[i],f[i-1][j]);//要么把当前放入，要么跳过，看看谁更大 
				
			}
		}
	}//到这里表格全部填写完毕 
	int maxx=0;
	for(int i=1;i<5;i++)
	{
		for(int j=1;j<9;j++)
		{
			maxx=max(f[i][j],f[i][j-1]);
			printf("f[%d][%d]=%d\n",i,j,f[i][j]);
		}
	} 
	cout<<"最大数值为："<<maxx<<endl;
}
