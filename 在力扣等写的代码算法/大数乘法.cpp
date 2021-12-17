#include <iostream>
using namespace std;

const int maxn=10005;
int a[maxn],b[maxn],c[maxn];
char x[maxn],y[maxn];
int n;
int add(int *a,int *b,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c[i+j]+=a[i]*b[j];
        }
    }
    int t=0;
    for(int i=0;i<m+n-1;i++){
        t=t+c[i];
        c[i]=t%10;
        t=t/10;
    }
    int k=m+n-1;
    while(t>0){
        c[k++]=t%10;
        t=t/10;
    }
    return k;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>x[i];
    for(int i=0;i<n;i++) cin>>y[i];
    for(int i=n-1;i>=0;i--) a[i]=x[n-1-i]-'0';
    for(int i=n-1;i>=0;i--) b[i]=y[n-1-i]-'0';
    int len=add(a,b,n,n);
    for(int i=len-1;i>=0;i--) cout<<c[i];
    return 0;
}
