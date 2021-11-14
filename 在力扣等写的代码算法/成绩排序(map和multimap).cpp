#include<iostream>
#include<bits/stdc++.h>
using namespace std;//map只允许key与 value一一对应；multimap一个key可对应多个value；
multimap<int,string> mp;//因为要让成绩排序，而map默认key值来排序，因此key值输入成绩 
int main()
{
	int n,sco,op;
	string sna;
	while(cin>>n)
	{
		cin>>op;
		for(int i=0;i<n;i++)
		{
			cin>>sna>>sco;
			mp.emplace(sco,sna);
		}
		switch(op)
		{
			case 0:
				for(auto i=mp.rbegin();i!=mp.rend();i++)
				{
					cout<<i->second<<" "<<i->first<<endl;
				}
				break;
			case 1:
				for(auto i=mp.begin();i!=mp.end();i++)
				{
					cout<<i->second<<" "<<i->first<<endl;
				}
				break;
		}
	}
	return 0;
}
