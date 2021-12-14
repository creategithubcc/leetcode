#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	while(cin>>str)
	{
		stable_sort(str.begin(),str.end());
		cout<<str<<endl;
	}
	return 0;
}
