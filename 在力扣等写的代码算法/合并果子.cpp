#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int x;
};
priority_queue<node> str;
bool operator<(node a,node b)
{
    return a.x>b.x;
}
int main()
{
    int n;
    cin>>n;
    if(n==1)
	{
        cout<<"0";
        return 0;
    }
    for(int i=0;i<n;i++)
	{
        int x;
        cin>>x;
        str.push(node{x});
    }
    int ans=0;
    while(str.size()>1)
	{
        int x,y;
        x=(str.top()).x;//相当于是把优先级颠倒过来？ 
        str.pop();
        y=(str.top()).x;
        str.pop();
        ans+=x+y;
        str.push(node{x+y});
    }
    cout<<ans;
    return 0;
}
