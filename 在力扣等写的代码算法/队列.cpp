#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue<int>que;
	int n,input;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>input;
			que.push(input);
		}
		//que.swap(que2);//ͨ�������������������еģ�����һ�� 
		//cout<<que.back()<<endl;//�൱��ջ����������һ���������ֵ 
		while(!que.empty())
		{
			cout<<que.front()<<endl;//������� 
			que.pop();
		}
	}
	return 0;
}
