#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct link
{
	int data;//数据 
	struct link *next;//链表指针指向下一个 
};
int main()
{
	int n,m,maxx,data,car=0;
	struct link *headnode=(struct link *)malloc(sizeof(struct link));//创建头节点1
	headnode->next=NULL;
	cin>>n;
	for(int i=0;i<n;i++)//输入第一个链表 
	{
		cin>>data;
		struct link *newnode=(struct link*)malloc(sizeof(struct link));
		newnode->data=data;
		newnode->next=headnode->next;
		headnode->next=newnode;
	}
	struct link *headnode2=(struct link *)malloc(sizeof(struct link));//创建头节点1
	headnode2->next=NULL;
	cin>>m;
	for(int i=0;i<m;i++)//输入第一个链表 
	{
		cin>>data;
		struct link *newnode2=(struct link*)malloc(sizeof(struct link));
		newnode2->data=data;
		newnode2->next=headnode2->next;
		headnode2->next=newnode2;
	}
	maxx=max(n,m);
	int arr[maxx+1]={0},arr2[maxx+1]={0},ansarr[maxx+1]={0};
	struct link *pri=headnode->next;
	int i=0;
	while(pri)
	{
		arr[i]=pri->data;
		pri=pri->next;
		i++;
	}
	pri=headnode2->next;
	i=0;
	while(pri)
	{
		arr2[i]=pri->data;
		pri=pri->next;
		i++;
	}
	for(int i=0;i<maxx+1;i++)
	{
		ansarr[i]=(arr[i]+arr2[i]+car)%10;
		car=(arr[i]+arr2[i]+car)/10;
	}
	if(ansarr[maxx]==0)
	{
		maxx--;
	}
	struct link *headnode3=(struct link *)malloc(sizeof(struct link));//创建头节点1
	headnode3->next=NULL;
	for(int i=maxx;i>=0;i--)//输入第一个链表 
	{
		struct link *newnode3=(struct link*)malloc(sizeof(struct link));
		newnode3->data=ansarr[i];
		newnode3->next=headnode3->next;
		headnode3->next=newnode3;
	}
	pri=headnode3->next;
	while(pri)
	{
		cout<<pri->data<<" ";
		pri=pri->next;
	}
	cout<<endl;
}
