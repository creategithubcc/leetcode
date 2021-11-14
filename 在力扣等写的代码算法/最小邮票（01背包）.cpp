#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int val,n,i,j;
    int value[101]={},f[101][101]={};
    while(scanf("%d",&val)!=EOF)
    {
        scanf("%d",&n);
        for(i=1;i<n+1;++i)
		{
			scanf("%d",&value[i]);
		} 
        memset(f,63,sizeof(f));
        for(i=0;i<n+1;++i)
		{
			f[i][0]=0;
		} 
        for(i=1;i<n+1;++i)
        {
			for(j=1;j<val+1;++j)
            {
                f[i][j]=f[i-1][j];
                if(j>=value[i])
				{
					f[i][j]=min(f[i-1][j-value[i]]+1,f[i][j]);
				}
            }   
        }
        if(f[n][val]==1061109567)
		{
			printf("0\n");
		}
        else
		{
			printf("%d\n",f[n][val]);
		}
    }return 0;
}
