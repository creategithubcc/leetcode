#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=0;
	string str;
	while(cin>>str)
	{
		while(1)
		{
			n=str.find("gzu");
			if(n!=str.npos)
			{
				str.erase(n,3);
				continue;
			}
			n=str.find("Gzu");
			if(n!=str.npos)
			{
				str.erase(n,3);
				continue;
			}
			n=str.find("GZu");
			if(n!=str.npos)
			{
				str.erase(n,3);
				continue;
			}
			n=str.find("GZU");
			if(n!=str.npos)
			{
				str.erase(n,3);
				continue;
			}
			n=str.find("GzU");
			if(n!=str.npos)
			{
				str.erase(n,3);
				continue;
			}
			n=str.find("gZu");
			if(n!=str.npos)
			{
				str.erase(n,3);
				continue;
			}
			n=str.find("gZU");
			if(n!=str.npos)
			{
				str.erase(n,3);
				continue;
			}
			n=str.find("gzU");
			if(n!=str.npos)
			{
				str.erase(n,3);
				continue;
			}
			break;			
		}	
		cout<<str<<endl;
	}
	return 0;
}
