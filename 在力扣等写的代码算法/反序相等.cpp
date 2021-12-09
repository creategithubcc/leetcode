#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N=1008,n;
	while(N<10000)
	{
		n=N*9;//1234 4321
		if((N%10)==n/1000)//4
		{
			if((N%100)/10==(n%1000)/100)//3
			{
				if((N%1000)/100==(n%100)/10)//2
				{
					if(N/1000==(n%10))//1
					{
						cout<<N<<endl;
					}
				}
			}
		}
		N+=9;
	}
}
