#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			for(int k=0;k<10;k++)
			{
				if(((i*100+j*10+k)+(j*100+k*10+k))==532)
				{
					cout<<i<<" "<<j<<" "<<k<<endl;
				}
			}
		}
	}
}
 
