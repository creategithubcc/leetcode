#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
    while(cin>>str)
	{
        int n,start,len;
        cin>>n;
        while(n--)
		{
			string com;//命令
            cin>>com;
            if(com[0]=='0')
			{
                start=com[1]-'0';
                len=com[2]-'0';
                reverse(str.begin()+start,str.begin()+len+start);//反转 
            }
            if(com[0]=='1')
			{
                start=com[1]-'0';
                len=com[2]-'0';
                string str2=com.substr(3,com.length()-3);//先把字符串提取出来 
                str.replace(start,start+len-1,str2,0,str2.size()); 
            }
            cout<<str<<endl;//把com 【sta】到com 【len】为止的字符串都给替换原来的str2并赋值给str 
        }
    }
    return 0;
}
