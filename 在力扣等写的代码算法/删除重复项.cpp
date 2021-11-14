#include<iostream>
#include<string.h>
using namespace std;


int main()
{
	int nums[10086],i=0,j,ans;
	while(scanf("%d",&nums[i])!=EOF)
	{
		i++;
	}
	int len=i;
	if(len==0)
	{
		return 0;
	}
	else
	{
		j=0;
		for(int i=0;i<len;i++)
		{
			if(nums[j] != nums[i])
			{
				nums[++j] = nums[i];
		 	}
		}
	}
	ans= j + 1;	
	for(int i=0;i<ans;i++)
	{
		cout<<nums[i]<<" ";
	}
	cout<<endl;
	cout<<"len="<<ans<<endl;
	
}
