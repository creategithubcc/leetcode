#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[10086];
	int i,max=0,j,ans=1;
	cin>>str;
	int len=strlen(str);
	if(len==0)
	{
		return 0;
	}
	else if(len==1)
	{
		return 1;
	}
	
	for(i=1;i<len;i++)
	{
		for(j=i-ans;j<i;j++)
		{
			if(str[i]==str[j])
			{
				ans=i-j;
				break;
			}
		}
		if(i==j)
		{
			ans++;
		}
		if(max<ans)
		{
			max=ans;
		}
	}
		cout<<max<<endl;
}
