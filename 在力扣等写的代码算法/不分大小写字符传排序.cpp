#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool cmp(char a,char b)
{
	if(a<='Z'&&a>='A')
	{
		a+=32;
	}
	if(b<='Z'&&b>='A')
	{
		b+=32;
	}
	if((a>='a'&&a<='z')&&(b>='a'&&b<='z'))
	{
		return a<b;
	}
}
int main()
{
	string str;
	while(getline(cin,str))//为什么不能用cin>>str呢 
	{
        int len=str.size();//因为用cin会自动忽略空格之类的特殊符号 
        char change[len];
        int j=0;
        for(int i=0;i<len;i++)
        {
            if(str[i]>='A'&&str[i]<='z')
            {
				change[j++]=str[i];
			}
        }       
		stable_sort(change,change+j,cmp);
	    for(int i=0,j=0;i<len;i++)
	    {
	        if(str[i]>='A'&&str[i]<='z')
	        {
				str[i]=change[j++];
			}
	    }
		cout<<str<<endl;
	}
	return 0;
}
