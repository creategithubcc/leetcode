#include<iostream>
#include<bits/stdc++.h>
/*
这道题就像2048游戏一样滑动整合,拿n=7来举例
1 1 1 1 1 1 1
 2  1 1 1 1 1
 2   2  1 1 1
 2   2   2  1
   4     2  1
   4    1 1 1
所以总共有6种 
*/ 
using namespace std; 
int main()				
{
	int f[10]={},n;
	f[0]=1;
    for(int i=1;i<=10;i=i*2)//每次能取的价值是2的倍数 
    {
        for(int j=i;j<=10;j++)//j表示当前数总共有几种分解法 
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
