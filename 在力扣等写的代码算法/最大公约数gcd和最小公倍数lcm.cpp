#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) 
{  
    if (b == 0) return a;  
    else return gcd(b, a % b);  
}  

int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		cout<<"���Լ��gcd��"<<__gcd(n,m)<<endl<<"��С������lcm��"<<(m*n/__gcd(n,m))<<endl;
	}
	return 0;
} 
