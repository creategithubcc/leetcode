#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct link
{
	int data;
	struct link *next;
}link;
struct link *createlist()
{
	struct link *headnode=(struct link*)malloc(sizeof(struct link));
	headnode->next=NULL;
	return headnode;
};
struct link *createnode(int data)
{
	struct link *newnode=(struct link*)malloc(sizeof(struct link));
	newnode->data=data;//结构体用. 结构体指针用-> 
	newnode->next=NULL;
	return newnode;
};
void insertnode(struct link *headnode,int data)
{
	struct link *newnode=createnode(data);
	newnode->next=headnode->next;
	headnode->next=newnode;
};
void coutt(struct link *headnode)
{
	struct link *pri=headnode->next;
	while(pri)
	{
		cout<<pri->data<<" ";
		pri=pri->next;
	}
	cout<<endl;
}
bool cmp(int a,int b)
{
	return a>b;
}

int main()
{
	int a[201]={0},n,m,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	int len=i+m;
	for(i;i<len;i++)
	{
		cin>>a[i];
	}
	stable_sort(a,a+len,cmp);
	struct link *nodee=createlist();
	
	for(int i=0;i<len;i++)
	{
		insertnode(nodee,a[i]);
	}
	coutt(nodee);
}
