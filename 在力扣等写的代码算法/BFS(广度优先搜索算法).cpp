#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int mapp[100][100]={},access[100][100]={};
struct point//�ṹ��P 
{
	int x;
	int y;
	int step;
};
queue<point> P;//�������P 
int dx[4]={0,1,0,-1};//���������˳��
int dy[4]={1,0,-1,0};//(dx,dy)=(0,1)(1,0)(0,-1)(-1,0) 
int main()
{
	int n,m,s_x,s_y,e_x,e_y;//�����յ��xy����s_x,e_x 
	cout<<"�������ͼ���к��У�"<<endl; 
	cin>>n>>m;
	cout<<"�������ϰ������Ŀ��"<<endl; 
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>mapp[i][j];//��ͼ�ϰ������� 
		}
	} 
	cout<<"���������������յ����꣺"<<endl;
	cin>>s_x>>s_y>>e_x>>e_y;//������ʼ�յ� 
	//BSF
	point start;
	start.x=s_x;
	start.y=s_y;
	start.step=0;
	P.push(start);//�������� 
	access[s_x][s_y]=1; 
	int flag=0;//����д�����1����Ϊ0 
	while(!P.empty())
	{
		int x=P.front().x;//ȡ������Ԫ������ 
		int y=P.front().y;
		if(x==e_x&&y==e_y)//c�����յ����� 
		{
			flag=1; 
			cout<<P.front().step<<endl;
			break;
		} 
		for(int i=0;i<4;i++)//�ĸ������ƶ� �������� 
		{
			int  tx,ty;
			tx=x+dx[i];
			ty=y+dy[i];
			if(mapp[tx][ty]==1&&access[tx][ty]==0)//mapp[x][y]=1����û���ϰ��0������ 
			{
				point temp;//��� 
				temp.x=tx;
				temp.y=ty;
				temp.step=P.front().step + 1;
				P.push(temp);
				access[tx][ty]=1;
			}
		}
		P.pop();//��չ��󽫶���Ԫ�س��� 
	}
	if(flag==0)
	{
		cout<<"no answer!"<<endl;
	}
	return 0; 	
} 
