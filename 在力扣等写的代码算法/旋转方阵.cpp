#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int ans[30][30]={0};
int main()
{
	int n,w=1;
	while(cin>>n)
	{
		if(n%2==1)//���� 
		{
			ans[n/2][n/2]=n*n;//5/2=2.5,����2�����ģ����㿪ʼ�Ļ�0.1.2.3.4 
		}
		for(int i=0;i<n/2;i++)//ÿ�ζ��Ǽ�����Ե2�У��������մ���/2 
		{
			for(int j=i;j<n-i;j++)//1->n-1
			{
				ans[j][i]=w;//�� 
				w++;
			}
			for(int j=i+1;j<n-i;j++)//�� 
			{
				ans[n-i-1][j]=w;
				w++;
			}
			for(int j=n-i-2;j>i-1;j--)//�� 
			{
				ans[j][n-i-1]=w;
				w++;
			}
			for(int j=n-i-2;j>i;j--)//�� 
			{
				ans[i][j]=w;
				w++;
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				printf("%-3d ",ans[i][j]);//-3d���������3λ�� 
			}
			cout<<endl;
		}
	}
	return 0;
}
