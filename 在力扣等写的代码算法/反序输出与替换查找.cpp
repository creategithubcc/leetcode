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
			string com;//����
            cin>>com;
            if(com[0]=='0')
			{
                start=com[1]-'0';
                len=com[2]-'0';
                reverse(str.begin()+start,str.begin()+len+start);//��ת 
            }
            if(com[0]=='1')
			{
                start=com[1]-'0';
                len=com[2]-'0';
                string str2=com.substr(3,com.length()-3);//�Ȱ��ַ�����ȡ���� 
                str.replace(start,start+len-1,str2,0,str2.size()); 
            }
            cout<<str<<endl;//��com ��sta����com ��len��Ϊֹ���ַ��������滻ԭ����str2����ֵ��str 
        }
    }
    return 0;
}
