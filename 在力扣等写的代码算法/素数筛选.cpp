    #include<iostream>
	#include<bits/stdc++.h>  
    using namespace std;  //prime[0]����������ĸ���  
    int prime[1000086];  
    void getPrime() 
	{  
		int len=1000086;
        memset(prime,0,sizeof(prime));  
        for (int  i=2;i<=len;i++) 
		{  
            if(prime[i]==0)
			{
				prime[++prime[0]]=i; //pri[1]=2,pri[2]=3......
				//cout<<"prime["<<prime[0]<<"]="<<i<<endl;
			}  
            for(int j=1;j<=prime[0]&&prime[j]*i<=len;j++)
			{  
                prime[prime[j]*i]=1;  //������ʲô��ֻҪ��*i����len�����˵���Ǹ����Ƿ���������1 
                if(i%prime[j]==0)//��ɨ�赽1��ʱ����Ա��������������2��3��5��7���ʡ�Ȼ����������ѭ�� 
				{
					break;
				} 
            }  
        }  
    }  
    int main() 
	{  
        getPrime();//�Ƚ�������ɸѡԤ����  
        int a,b;  
        while(cin>>a>>b) 
		{  
            if(a>b)
			{
				swap(a,b);
			}  
            int ans=0;  
            for(int i=1;i<=prime[0];i++) 
			{  
                if(prime[i]>=a)
				{
					ans++;//��������a��+1 
				} 
                if (prime[i]>b) 
				{  
                    ans--;//����bҪ������  
                    break;  
                }  
            }  
            cout<<"�ܹ�������������"<<ans<<endl;
        }  
        return 0;  
    }  
