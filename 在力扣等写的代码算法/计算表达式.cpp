#include<iostream>
#include<bits/stdc++.h>
using namespace std;
map <char,int>mp;
double num(string str,int& a) 
{
	double number=0;
	while(isdigit(str[a]))//把字符串的数字全部压缩成一个数字，比如char '1' '8' '6' 变成int 186 
	{
		number=number*10+str[a]-'0';
		a++;
	}
	return number;
}

double cal(double a,double b,char op) 
{
	if(op=='+')return a+b;
	else if(op=='-')return a-b;
	else if(op=='*')return a*b;
	else if(op=='/')return a/b;
	else return 0;
}
int main() 
{
	mp['#']=0,mp['$']=1,mp['+']=2,mp['-']=2,mp['*']=3,mp['/']=3;
	string str;
	stack<char>op;
	stack<double>math;
	cin>>str;
	str+='$';
	op.push('#');
	int len=str.size();
	for(int a=0;a<len;a++) 
	{
		if(str[a]==' ')
		{
			continue;
		}                       
		else if(isdigit(str[a])) 
		{
			math.push(num(str,a));
			a--;
		}
		else 
		{
			if(mp[op.top()]<mp[str[a]]) 
			{
				op.push(str[a]);
			}
			else 
			{
				double y=math.top();
				math.pop();
				double x=math.top();
				math.pop();
				math.push(cal(x,y,op.top()));
				op.pop();
				a--;
			}
		}
	}
	cout<<math.top()<<endl;
	return 0;
}
