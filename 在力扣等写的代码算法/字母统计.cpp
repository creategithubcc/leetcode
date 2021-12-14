#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int cot[26]={0};
int main()
{
	string str;
	while(cin>>str)
	{
		memset(cot,0,sizeof(cot));
		int len=str.size();
		for(int i=0;i<len;i++)
		{
			if(str[i]<='Z'&&str[i]>='A')
			{
				cot[str[i]-'A']++;
			}
		}
		for(int i=0;i<26;i++)
		{
			cout<<char('A'+i)<<":"<<cot[i]<<endl;
		}
	}
	return 0;
}
