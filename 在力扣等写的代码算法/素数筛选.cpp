    #include<iostream>
	#include<bits/stdc++.h>  
    using namespace std;  //prime[0]存的是素数的个数  
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
                prime[prime[j]*i]=1;  //不管是什么，只要是*i后还在len里面就说明那个数是非素数，置1 
                if(i%prime[j]==0)//当扫描到1的时候可以被整除，否则就是2，3，5，7互质。然后跳出接着循环 
				{
					break;
				} 
            }  
        }  
    }  
    int main() 
	{  
        getPrime();//先进行素数筛选预处理  
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
					ans++;//素数大于a答案+1 
				} 
                if (prime[i]>b) 
				{  
                    ans--;//大于b要减回来  
                    break;  
                }  
            }  
            cout<<"总共有素数个数："<<ans<<endl;
        }  
        return 0;  
    }  
