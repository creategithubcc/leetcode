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
		p.push(str);//�ѵ�ǰ��ʼ�ַ����Ž����У�21021 
		val[str]=0;//�±�Ϊstr����ʼ��������val����ֵΪ0����Ϊ��û��λ 
		while(!p.empty())
		{
			string str2=p.front();//�ѵ�ǰ���׸���str2����һ��21021 
			string str3=str2;//ͬ������str3=21021 
			p.pop();//�Ѷ���ȥ������һ�ֶ��п��� 
			if(str2.find("2012")!=str2.npos)//������ǲ�һ����һ��������� 
			{
				flag=1;
				cout<<val[str2]<<endl;//�����ǰ���׵�int��ֵ����2��ֵΪ20121����ֵΪһ 
				break;
			}
			else
			{
				for(i=0;i<n-1;++i)
				{
					str3=str2;//���û�ҵ�2012����str2����str3�����Ǳ�Ҫ��
							  //��Ϊÿ��һ���ֻض���ı�str3��ֵ 
							  //Ϊ�˱�֤str3�ĳ�ʼֵ����str2������ÿ�ζ����¸�ֵ 21021
							  //���������Ĵ��ֻ�������õ���str3�ֱ��� 12021 20121 21201 21012  
					t=str3[i];//����str3��ֵ 
					str3[i]=str3[i+1];
					str3[i+1]=t;
					if(val.find(str3)==val.end())//�ҵ�str3��Ӧ���ƶ������պ�Ϊ��ʱ��˵���Ǹ��µ��ַ�������
												//�����Ϊ���˵��֮ǰ�������߹���һ���ˣ���pass��������� 
					{
						p.push(str3);//�ѵõ�������ַ�����Ϊ������� ��һ�ֺ�21021��ջ
									//ѹ��str3�����ĸ��������ֻ� 
						val[str3]=val[str2]+1;//��Ե�str3��ֵ��Ϊstr2+1��Ҳ������һ����ֵ��һ
											//����һ��str3��Ϊ�����ڸ�ֵ��str2���str2 
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
