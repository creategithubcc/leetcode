#include<iostream>
#include<cstring>
#include<bits/stdc++.h> 
using namespace std;

int f[5][9]={};//�ܹ�4����Ʒ����Ϊ8��01���� 
int l[20]={0};
int w[5]={0,2,3,4,5};//ÿ����Ʒ������ 
int v[5]={0,3,4,5,8};//ÿ����Ʒ�ļ�ֵ 
int main()
{
	memset(f,0,sizeof(f));
	for(int i=1;i<5;i++)//ѭ����Ʒ��� 
	{
		for(int j=1;j<9;j++)//ѭ���������������� 
		{
			if(w[i]>j)//���i��Ʒ�������ȵ�ǰ������ 
			{
				 f[i][j]=f[i-1][j];//������ǰ�ķ��� 
			}
			else
			{
				f[i][j]=max(f[i-1][j-w[i]]+v[i],f[i-1][j]);//Ҫô�ѵ�ǰ���룬Ҫô����������˭���� 
				
			}
		}
	}//��������ȫ����д��� 
	int maxx=0;
	for(int i=1;i<5;i++)
	{
		for(int j=1;j<9;j++)
		{
			maxx=max(f[i][j],f[i][j-1]);
			printf("f[%d][%d]=%d\n",i,j,f[i][j]);
		}
	} 
	cout<<"�����ֵΪ��"<<maxx<<endl;
}
