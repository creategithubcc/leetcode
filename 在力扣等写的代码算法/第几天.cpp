#include<stdio.h>
#include<string.h>
int main()
{
	int i,t,x,y,z;//x=�꣬y=�£�z=�� 
	int q[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("��������������Լ����¼���\n");
	scanf("%d %d %d",&x,&y,&z); 
	if((x%4==0&&x%100!=0)||(x%400==0))
	{
		q[1]=29;
	 } 
	 
	 if(i>0)
	 {
	 for(i=1;i<=11;i++)
	 {
	 	t=q[i]+z;
	 	printf("�����ǽ���ĵ�%d��\n",t);
	 	t+=q[i] ;}
	  }
	  else
	  {t=z;
	  	printf("�����ǽ���ĵ�%d��\n",t);
	   } 
}
