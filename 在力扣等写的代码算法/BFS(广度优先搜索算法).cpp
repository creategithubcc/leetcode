#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int mapp[100][100]={},access[100][100]={};
struct point//结构体P 
{
	int x;
	int y;
	int step;
};
queue<point> P;//申请队列P 
int dx[4]={0,1,0,-1};//上右下左的顺序
int dy[4]={1,0,-1,0};//(dx,dy)=(0,1)(1,0)(0,-1)(-1,0) 
int main()
{
	int n,m,s_x,s_y,e_x,e_y;//起点和终点的xy坐标s_x,e_x 
	cout<<"请输入地图的行和列："<<endl; 
	cin>>n>>m;
	cout<<"请输入障碍物的数目："<<endl; 
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>mapp[i][j];//地图障碍物填入 
		}
	} 
	cout<<"请输入起点坐标和终点坐标："<<endl;
	cin>>s_x>>s_y>>e_x>>e_y;//输入起始终点 
	//BSF
	point start;
	start.x=s_x;
	start.y=s_y;
	start.step=0;
	P.push(start);//将起点入队 
	access[s_x][s_y]=1; 
	int flag=0;//如果有答案则是1否则为0 
	while(!P.empty())
	{
		int x=P.front().x;//取出队首元素坐标 
		int y=P.front().y;
		if(x==e_x&&y==e_y)//c处理终点的情况 
		{
			flag=1; 
			cout<<P.front().step<<endl;
			break;
		} 
		for(int i=0;i<4;i++)//四个方向移动 上右下左 
		{
			int  tx,ty;
			tx=x+dx[i];
			ty=y+dy[i];
			if(mapp[tx][ty]==1&&access[tx][ty]==0)//mapp[x][y]=1代表没有障碍物，0代表有 
			{
				point temp;//入队 
				temp.x=tx;
				temp.y=ty;
				temp.step=P.front().step + 1;
				P.push(temp);
				access[tx][ty]=1;
			}
		}
		P.pop();//扩展完后将队首元素出队 
	}
	if(flag==0)
	{
		cout<<"no answer!"<<endl;
	}
	return 0; 	
} 
