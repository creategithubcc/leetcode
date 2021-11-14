#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct link 
{
	int data;
	struct link *next;
};
int main()
{
	int n,sum;
	struct link *headnode=(struct link *)malloc(sizeof(struct link));
	headnode->next=NULL;
	headnode->data=NULL;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>sum;
		struct link *node=(struct link *)malloc(sizeof(struct link));
		node->data=sum;
		node->next=headnode->next;
		headnode->next=node;
	}
	struct link *pri=headnode->next;
	while(pri)
	{
		cout<<pri->data<<" ";
		pri=pri->next;
	}
	cout<<endl<<"结束头插法！！"<<endl;
	struct link *endnode=(struct link *)malloc(sizeof(struct link)),*q;
	endnode->data=NULL;
	endnode->next=NULL;
	q=endnode;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>sum;
		struct link *node=(struct link*)malloc(sizeof(struct link));
		node->data=sum;
		q->next=node;//node赋值给q->next也就是endnode->next后面 
		q=node;//把node赋值给q进行下一轮 
	} 
	q->next=NULL;//最后q->next赋值0 
	pri=endnode->next;
	while(pri)
	{
		cout<<pri->data<<" ";
		pri=pri->next; 
	}
	cout<<endl<<"结束尾插法！！"<<endl;
	cout<<"请删除尾插法的某一链表元素"<<endl;
	int del;
	cin>>del;
	struct link *del1=endnode->next,*del2=endnode;
	if(del1)
	{
		while(del1->data!=del)
		{
			del2=del1;
			del1=del2->next;
			if(del1==NULL)
			{
				cout<<"找不到这个数字"<<endl;
				break;
			}
		}
		del2->next=del1->next;
		free(del1);
	}
	pri=endnode->next;
	while(pri)
	{
		cout<<pri->data<<" ";
		pri=pri->next; 
	}
}	
