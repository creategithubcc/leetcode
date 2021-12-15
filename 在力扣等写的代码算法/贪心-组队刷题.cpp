#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct anss
{
	float value;
	float hp;
	float val;
}ans[1001];

bool cmp2(anss a,anss b)
{
	return a.val>b.val;
}

int main()
{
	float hp;
	int n,i;
	while(cin>>hp>>n)
	{
		if((hp==-1)&&(n==-1)) return 0;
		float value=0;
		for(int i=0;i<n;i++)
		{
			cin>>ans[i].value>>ans[i].hp;
			ans[i].val=(ans[i].value/ans[i].hp);//贪心，哪怕一点都要用尽 
		}
		stable_sort(ans,ans+n,cmp2);
		
		for(i=0;i<n;i++)
		{
			if(ans[i].hp<=hp)
			{
				hp-=ans[i].hp;
				value+=ans[i].value; 
			}
			else
			{
				break;
			}
		}
		if(hp>0&&i!=n)
		{
			value+=hp*(ans[i].value/ans[i].hp);
		}
		printf("%.3f\n",value);
	}
	return 0;
}
