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

int a[5]={0};

int main()
{
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	stable_sort(a,a+5);
	struct link *nodee=createlist();
	
	for(int i=4;i>=0;i--)
	{
		insertnode(nodee,a[i]);
	}
	coutt(nodee);
}
