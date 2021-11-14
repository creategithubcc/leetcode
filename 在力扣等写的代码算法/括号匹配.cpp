#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	int i=1,ans=0;
	char n;
	char str[10086];
	cin>>str;
	int len=strlen(str);
	
	if(len%2==1||len==0 )
	{
		cout<<"false"<<endl;
		return 0;
	}
		
	char stack[len+1];
	while(n=str[ans])
	{
		if(n=='('||n=='{'||n=='[')
		{
			stack[i++]=n;
		}
		else if(n==')')
		{	
			if(stack[--i]!='(')
			{
				i=0;	
				break;
			}
		}
		else if(n=='}')
		{
			if(stack[--i]!='{')
			{
				i=0;
				break;
			}
		}
		else if(n==']')
		{
			if(stack[--i]!='[')
			{
				i=0;
				break;
			}			
		}	
		else if(n!='('||n!=')'||n!='{'||n!='}'||n!='['||n!=']')
		{
				i=0;
				break;
		}
		ans++;					
	}		
	cout<<i<<endl;
	if(i!=0&&i<3)
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl; 
	}
}
