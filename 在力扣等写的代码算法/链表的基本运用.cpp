#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct link
{
	int data;//数据 
	struct link *next;//链表指针指向下一个 
};
/*void test()//静态链表 
{
	struct link node1={10,NULL};
	struct link node2={20,NULL};
	struct link node3={30,NULL};
	struct link node4={40,NULL};
	struct link node5={50,NULL};
	//把链表串起来 
	node1.next=&node2;
	node2.next=&node3;
	node3.next=&node4;
	node4.next=&node5;
	//如何遍历该链表,定义一个辅助指针变量 
	struct link *pr=&node1; 
	while(pr!=NULL)
	{
		cout<<pr->data<<endl;
		pr=pr->next;//指针移动到下一个元素的首地址 
	}
} */
struct link *createlist()//动态链表 头节点 
{
	struct link *headnode=(struct link*)malloc(sizeof(struct link));
	//headnode成为结构体变量
	//headnode->data=NULL;
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
void printlist(struct link *headnode)
{
	struct link *pri=headnode->next;//表头第二个节点开始打印 
	while(pri)
	{
		cout<<pri->data<<endl;
		pri=pri->next;
	}
	cout<<"测试完毕"<<endl;
}
void insertnode(struct link *headnode,int data)
{
	struct link *newnode=createnode(data);
	newnode->next=headnode->next;//接上去 ，头插法所以输出是倒叙。5-4-1-2-3，4\5是插进去的 
	headnode->next=newnode;
}
void deletenode(struct link* headnode,int deletedata)
{
	struct link *deletenode1=headnode->next;
	struct link *deletenode2=headnode;
	if(deletenode1==NULL)
	{
		cout<<"无法删除链表为空！"<<endl;
	}
	else
	{
		while(deletenode1->data!=deletedata)
		{
			deletenode2=deletenode1;
			deletenode1=deletenode2->next;
			if(deletenode1==NULL)
			{
				cout<<"未找到相关信息无法删除！"<<endl;
				break; 
			}
		}
		deletenode2->next=deletenode1->next;
		free(deletenode1);
	}
}

int main()
{
	//test(); 
	struct link *curr=createlist();
	insertnode(curr,1);
	insertnode(curr,2);
	insertnode(curr,3);
	printlist(curr);
	
	deletenode(curr,2);
	printlist(curr);
}
