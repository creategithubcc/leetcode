#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long int mod(long long x,long long y,long long m)
{
	long long int ans=1;
	while(y>0)
	{
		if(y%2==1)//ex:10011,��y=0��ʱ���û�У����ó�*x����Ϊ������һ����x^ż�� 
		{
			ans=ans*x%m;
		}
		x=x*x%m;
		//�൱��x=x^(k*2)%m,Ϊʲô��ô����Ϊ������Ҫ%m��������һ������
		//�𰸶�һ��,ΪʲôҪ*2��Ϊ������һ����x^ż�� 
		y/=2;//�ֳ�ż���ݼ����� 
	}
	return ans;
}

int main()
{
	long long int x,n;
	while(cin>>x>>n)
	{
		cout<<mod(x,n,233333)<<endl;
	}
	return 0;
}
