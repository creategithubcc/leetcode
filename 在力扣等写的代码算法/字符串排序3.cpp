#include<iostream> 
#include<bits/stdc++.h>
using namespace std;

bool cmp(string a,string b) 
{
	return a.size()<b.size();
}

int main() 
{
	int n;
	string str,sans[100];//s
	while(cin>>n) 
	{
		for(int i=0;i<n;i++)
		{
			getline(cin,str);
			if(str=="")
			{
				i--;
				continue;
			}
			else if(str=="stop")
			{
				n=i;
				break;
			}
			else
			{
				sans[i]=str;
			}
		}
		stable_sort(sans,sans+n,cmp);//ֻ��û�����С��ʱ�������begin��end 
		for(int i=0;i<n;i++)
		{
			cout<<sans[i]<<endl;
		} 
	}
}
