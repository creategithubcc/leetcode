#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct anss 
{
	string name;
	string time;
	string run;
}ans[10086];
bool cmp(anss a,anss b)
{
	if(a.run==b.run)
	{
		return a.time<b.time;
	}
	else 
	{
		return a.run<b.run;
	}
}
int main()
{
	string str;
	int cot=0;
	while(getline(cin,str))
	{
		if(str=="")
		{
			break;
		}
		int len=str.size(),i;
		for(i=len-1;i>=1;i--)//先对比运行时间，所以从右往左 ,至少有一个空格 
		{
			if(str[i]!=' '&&str[i-1]==' ')
			{
				ans[cot].run=str.substr(i,len-i);
				break;
			}
		} 
		for(int j=0;j<len-1;j++)//从左往右 
		{
			if(str[j]==' '&&str[j+1]!=' ')
			{
				ans[cot].name=str.substr(0,j+1);
				ans[cot].time=str.substr(j+1,i-j-1);
				break;
			}
		} 
		cot++;
	}
	stable_sort(ans,ans+cot,cmp);
	for(int i=0;i<cot;i++)
	{
		cout<<ans[i].name <<ans[i].time <<ans[i].run<<endl;
	}
}
