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
	cout<<endl<<"����ͷ�巨����"<<endl;
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
		q->next=node;//node��ֵ��q->nextҲ����endnode->next���� 
		q=node;//��node��ֵ��q������һ�� 
	} 
	q->next=NULL;//���q->next��ֵ0 
	pri=endnode->next;
	while(pri)
	{
		cout<<pri->data<<" ";
		pri=pri->next; 
	}
	cout<<endl<<"����β�巨����"<<endl;
	cout<<"��ɾ��β�巨��ĳһ����Ԫ��"<<endl;
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
				cout<<"�Ҳ����������"<<endl;
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
