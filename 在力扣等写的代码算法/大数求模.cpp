    #include<iostream> 
    #include<bits/stdc++.h>
    using namespace std;
    string str;  
    int main() 
	{  
        int m,n;  
        while(cin>>str>>n) 
		{  
            m=0;  
            for(int i=0;str[i]!='\0';i++)  
            {
				m=((m*10)%n+(str[i]-'0')%n)%n;  
			}
            cout<<m<<endl;
        }  
        return 0;  
    }  
