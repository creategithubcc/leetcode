#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i,flag=0;
		string str;
		char t;
		cin>>str;
		queue<string> p;
		map<string,int> val;
		p.push(str);//把当前初始字符串放进队列，21021 
		val[str]=0;//下标为str（初始）的数组val的数值为0，因为还没移位 
		while(!p.empty())
		{
			string str2=p.front();//把当前队首赋给str2，第一轮21021 
			string str3=str2;//同样赋给str3=21021 
			p.pop();//把对手去掉，第一轮队列空了 
			if(str2.find("2012")!=str2.npos)//如果不是不一样（一样）则进入 
			{
				flag=1;
				cout<<val[str2]<<endl;//输出当前队首的int数值，第2轮值为20121，故值为一 
				break;
			}
			else
			{
				for(i=0;i<n-1;++i)
				{
					str3=str2;//如果没找到2012，则将str2赋给str3，这是必要的
							  //因为每随一次轮回都会改变str3的值 
							  //为了保证str3的初始值都是str2，所以每次都会新赋值 21021
							  //比如样例四次轮回下来后得到的str3分别是 12021 20121 21201 21012  
					t=str3[i];//交换str3的值 
					str3[i]=str3[i+1];
					str3[i+1]=t;
					if(val.find(str3)==val.end())//找到str3对应的移动步数刚好为零时，说明是个新的字符串搭配
												//如果不为零就说明之前有样例走过这一步了，故pass，否则进入 
					{
						p.push(str3);//把得到后的新字符串作为放入队列 第一轮后21021出栈
									//压入str3上面四个数字在轮回 
						val[str3]=val[str2]+1;//相对的str3的值变为str2+1，也就是上一轮数值加一
											//到下一轮str3变为队首在赋值给str2变成str2 
					}
				}
			}
		}
		if(flag==0)
		{
			cout<<"-1"<<endl;
		}
	}
}
