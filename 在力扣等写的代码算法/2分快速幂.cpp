#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long int mod(long long x,long long y,long long m)
{
	long long int ans=1;
	while(y>0)
	{
		if(y%2==1)//ex:10011,在y=0的时候就没有，不用惩*x，因为二次幂一定是x^偶数 
		{
			ans=ans*x%m;
		}
		x=x*x%m;
		//相当于x=x^(k*2)%m,为什么这么做因为反正都要%m不如在这一块先做
		//答案都一样,为什么要*2因为二次幂一定是x^偶数 
		y/=2;//分成偶数幂继续算 
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
