#include<iostream>
#include<bits/stdc++.h>
/*
��������2048��Ϸһ����������,��n=7������
1 1 1 1 1 1 1
 2  1 1 1 1 1
 2   2  1 1 1
 2   2   2  1
   4     2  1
   4    1 1 1
�����ܹ���6�� 
*/ 
using namespace std; 
int main()				
{
	int f[10]={},n;
	f[0]=1;
    for(int i=1;i<=10;i=i*2)//ÿ����ȡ�ļ�ֵ��2�ı��� 
    {
        for(int j=i;j<=10;j++)//j��ʾ��ǰ���ܹ��м��ַֽⷨ 
        {
			f[j]+=f[j-i];//
			f[j]%=100;
		}
    } 
    while(cin>>n)
    {
    	for(int i=0;i<=n;++i)
    	{
			cout<<"f["<<i<<"]="<<f[i]<<endl;
		}
        cout<<"max="<<f[n]<<endl;
    }
}
