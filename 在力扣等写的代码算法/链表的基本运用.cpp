#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct link
{
	int data;//���� 
	struct link *next;//����ָ��ָ����һ�� 
};
/*void test()//��̬���� 
{
	struct link node1={10,NULL};
	struct link node2={20,NULL};
	struct link node3={30,NULL};
	struct link node4={40,NULL};
	struct link node5={50,NULL};
	//���������� 
	node1.next=&node2;
	node2.next=&node3;
	node3.next=&node4;
	node4.next=&node5;
	//��α���������,����һ������ָ����� 
	struct link *pr=&node1; 
	while(pr!=NULL)
	{
		cout<<pr->data<<endl;
		pr=pr->next;//ָ���ƶ�����һ��Ԫ�ص��׵�ַ 
	}
} */
struct link *createlist()//��̬���� ͷ�ڵ� 
{
	struct link *headnode=(struct link*)malloc(sizeof(struct link));
	//headnode��Ϊ�ṹ�����
	//headnode->data=NULL;
	headnode->next=NULL; 
	return headnode;
};
struct link *createnode(int data)
{
	struct link *newnode=(struct link*)malloc(sizeof(struct link));
	newnode->data=data;//�ṹ����. �ṹ��ָ����-> 
	newnode->next=NULL;
	return newnode;
};
void printlist(struct link *headnode)
{
	struct link *pri=headnode->next;//��ͷ�ڶ����ڵ㿪ʼ��ӡ 
	while(pri)
	{
		cout<<pri->data<<endl;
		pri=pri->next;
	}
	cout<<"�������"<<endl;
}
void insertnode(struct link *headnode,int data)
{
	struct link *newnode=createnode(data);
	newnode->next=headnode->next;//����ȥ ��ͷ�巨��������ǵ���5-4-1-2-3��4\5�ǲ��ȥ�� 
	headnode->next=newnode;
}
void deletenode(struct link* headnode,int deletedata)
{
	struct link *deletenode1=headnode->next;
	struct link *deletenode2=headnode;
	if(deletenode1==NULL)
	{
		cout<<"�޷�ɾ������Ϊ�գ�"<<endl;
	}
	else
	{
		while(deletenode1->data!=deletedata)
		{
			deletenode2=deletenode1;
			deletenode1=deletenode2->next;
			if(deletenode1==NULL)
			{
				cout<<"δ�ҵ������Ϣ�޷�ɾ����"<<endl;
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
