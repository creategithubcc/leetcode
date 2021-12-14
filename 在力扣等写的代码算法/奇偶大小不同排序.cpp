#include<iostream> 
#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b) 
{
	if(a%2==b%2&&a%2==1)//奇数 
	{
		return a>b;
	} 
	else if(a%2==b%2&&a%2==0)//偶数 
	{
		return a<b;//从小到大 
	} 
	else
	{
		return (a%2)>(b%2);//1>0所以奇数在前面 
	} 
}

int main() 
{
	int a[10];
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]>>a[8]>>a[9]) 
	{
		stable_sort(a,a+10,cmp);
		for(int i=0;i<10;i++) 
		{
			cout<<a[i]<< " ";
		}
		cout<<endl;
	}
}
