#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,math;
	while(cin>>n)
	{
		int arr[n]={0};
		for(int i=0;i<n;i++)
		{
			cin>>math;
			for(int j=1;j<=sqrt(math);j++)
			{
				if(math%j==0)
				{
					if(math/j==j)
					{
						arr[i]+=1;
					}
					else
					{
						arr[i]+=2;
					}
				}
			}
			cout<<arr[i]<<endl;
		}
	}
}
