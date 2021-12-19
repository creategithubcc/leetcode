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
		//que.swap(que2);//通常是用来交换两个队列的，类型一样 
		//cout<<que.back()<<endl;//相当于栈顶，输出最后一个输入的数值 
		while(!que.empty())
		{
			cout<<que.front()<<endl;//输出队首 
			que.pop();
		}
	}
	return 0;
}
