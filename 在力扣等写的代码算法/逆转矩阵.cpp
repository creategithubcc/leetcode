#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int a[100][100]={0};
int aa[100][100]={0};
int b[100][100]={0};
int n,t=0;//m
void func(int t)
{
	if(t==0)
	{
		for(int i=0;i<n;i++)
		{
		 	for(int j=0;j<n;j++)
		 	{
			 	b[j][n-i-1]=a[i][j];//m->n
			}
		}
	}
	else
	{
		for(int i=0;i<n;i++)
		{
		 	for(int j=0;j<n;j++)
		 	{
			 	a[j][n-i-1]=b[i][j];//m->n
			}
		}
	}
}
int main()
{
	while(cin>>n)
	{
		memset(a,0,sizeof(a));
		memset(aa,0,sizeof(aa));
		memset(b,0,sizeof(b));
		 for(int i=0;i<n;i++)
		 {
		 	for(int j=0;j<n;j++)
		 	{
			 	cin>>a[i][j];
			 }
		 }
		 for(int i=0;i<n;i++)
 		 {
 		 	for(int j=0;j<n;j++)
 		 	{
 			 	cin>>aa[i][j];
 			 }
 		 }
 		 for(int i=0;i<n;i++)
		 {
		 	for(int j=0;j<n;j++)
		 	{
			 	if(a[i][j]!=aa[i][j])
			 	{
			   		goto qoop;
				}
			}
		 }
		 cout<<"0"<<endl;
		 continue;
		 qoop:
 		 func(0);
		 for(int i=0;i<n;i++)
  		 {
  		 	for(int j=0;j<n;j++)
  		 	{
  			 	if(b[i][j]!=aa[i][j])
  			 	{
				   	goto loop;
				}
  			 }
  		 }
  		 cout<<"90"<<endl;
  		 continue;
		 loop:
		 func(1);	 
		 for(int i=0;i<n;i++)
   		 {
   		 	for(int j=0;j<n;j++)
   		 	{
   			 	if(a[i][j]!=aa[i][j])
   			 	{
 				   	goto poop;
 				}
   			 }
   		 }
   		 cout<<"180"<<endl;
   		 continue;
 		 poop:
 		 func(0);
 		 for(int i=0;i<n;i++)
		 {
		 	for(int j=0;j<n;j++)
		 	{
			 	if(b[i][j]!=aa[i][j])
			 	{
			   		goto toop;
				}
			}
		 }
		 cout<<"270"<<endl;
		 continue;
		 toop:
		 	cout<<"-1"<<endl;
		 /*for(int i=0;i<n;i++)
 		 {
 		 	for(int j=0;j<n;j++)
 		 	{
 			 	cout<<b[i][j]<<" ";
 			 }
 			 cout<<endl;
 		 }*/
	}
	return 0; 
}
