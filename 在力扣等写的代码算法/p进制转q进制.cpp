#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int math[1008],b[1008];
int jinzhizhuanhuan(int p,int q,int math[],int len) // p为原始进制，q为要转化的进制
{
    int cot=0,car,i=0,t;
    while(i<len)
    {
        car=0;
        for(int j=i;j<len;j++)
        {
            t=(car*p+math[j])%q;
            math[j]=(car*p+math[j])/q;
            car=t;
        }
        b[cot++]=car;
        while(math[i]==0&&i<len) 
		{
			i++;
		}
    }
    return cot;
}

int main()
{
    string a;
    int i;
	while(cin>>a)
	{
		int len=a.size(),len_a,len_b;
		for(i=0;i<len;i++)
		{
			math[i]=a[i]-'0';
		}
		math[i]='\0';
		len_a=jinzhizhuanhuan(10,2,math,len);
		for(i=0;i<len_a;i++)
		{
			math[i]=b[i];
		}
		len_b=jinzhizhuanhuan(2,10,math,len_a);
		for(i=len_b-1;i>=0;i--)
		{
			cout<<b[i];
		}
		cout<<endl;
	}
}
