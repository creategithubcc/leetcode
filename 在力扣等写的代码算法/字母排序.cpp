#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string str[100];//str����һ��Ҫ�Ӹ���Χ 
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>str[i];
		}
		stable_sort(str,str+n);
		for(int i=0;i<n;i++)
		{
			cout<<str[i]<<endl;
		}
	}
	return 0; 
}
