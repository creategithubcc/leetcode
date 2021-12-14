#include<iostream>
using namespace std;

int f[12]={31,29,31,30,31,30,31,31,30,31,30,31};
string week[]={"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};
int today=103;//2012ÈòÄê 
int main()
{
	int month,day,input=0;
	scanf("%d%d",&month,&day);
	for (int i=0;i<month-1;i++) 
	{
		input=input+f[i];
	}
	input=input+day;
	int ans=(input-today)%7;
	cout<<week[ans]<<endl;
	return 0;
}
