#include<iostream>
#include<bits/stdc++.h>
using namespace std;//mapֻ����key�� valueһһ��Ӧ��multimapһ��key�ɶ�Ӧ���value��
multimap<int,string> mp;//��ΪҪ�óɼ����򣬶�mapĬ��keyֵ���������keyֵ����ɼ� 
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
