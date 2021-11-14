#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct ListNode 
{
	int data;
	struct ListNode *next;
};
int main()
{
	int n,m,sum;
	struct ListNode *l1=(struct ListNode *)malloc(sizeof(struct ListNode));
	struct ListNode *q;
	l1->data=NULL;
	l1->next=NULL;
	q=l1;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>sum;
		struct ListNode *node=(struct ListNode *)malloc(sizeof(struct ListNode));
		node->data=sum;
		q->next=node;
		q=node;
	}
	q->next=NULL;
	
	struct ListNode *l2=(struct ListNode *)malloc(sizeof(struct ListNode));
	l2->data=NULL;
	l2->next=NULL;
	q=l2;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>sum;
		struct ListNode *node2=(struct ListNode *)malloc(sizeof(struct ListNode));
		node2->data=sum;
		q->next=node2;
		q=node2;
	}
	q->next=NULL;
	
	int array[n+m+1]={0};
	struct ListNode *pri=l1->next;
	int i=0;
	while(pri)
	{
		array[i]=pri->data;
		i++;
		pri=pri->next;
	}
	pri=l2->next;
	while(pri)
	{
		array[i]=pri->data;
		i++;
		pri=pri->next;
	}
	int t=0;
	for(int i=0;i<n+m;i++)
	{
		for(int j=0;j<n+m-i-1;j++)
		{
			if(array[j]>array[j+1])
			{
				t=array[j];
				array[j]=array[j+1];
				array[j+1]=t;
			}
		}
	}
	
	struct ListNode *headnode3=(struct ListNode *)malloc(sizeof(struct ListNode));
	q=headnode3;
	for(int i=0;i<m+n;i++)
	{
		struct ListNode *node3=(struct ListNode *)malloc(sizeof(struct ListNode));
		node3->data=array[i];
		q->next=node3;
		q=node3;
	}
	q->next=NULL;
	
	pri=headnode3->next;
	while(pri)
	{
		cout<<pri->data<<" ";
		pri=pri->next;
	}
	cout<<endl;
}
