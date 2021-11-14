#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char a[10086],b[10086];
	cin>>a;
	cin>>b;
	int flag = 0;
    int len_a = strlen(a);
    int len_b = strlen(b);
    int len  = max(len_a, len_b);
    int i    = len_a - 1;
    int j    = len_b - 1;
    char ans[10088]={};
    int k = len + 1;
    ans[k--] = '\0';
    while (i >= 0 || j >= 0 || flag > 0) 
	{
        flag += (i >= 0) ? a[i--] - '0' : 0;
        flag += (j >= 0) ? b[j--] - '0' : 0;
        ans[k--] = flag % 2 + '0';
        flag /= 2;
    } 
	
	
	for(int i=0;i<len+1;i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}
