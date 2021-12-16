#include<iostream>
#include<math.h> 
using namespace std;
/*
    思路：
    将n!对于 2 3 4 .... n质因数分解  将对应的质因数个数桶方式记录在arr_a 
    将a 质因数分解记录在arr_b
    从2开始遍历 如果每一项都保证arr_a[i]>arr_b[i]*k那么a^k一定可以整除开n!
    一旦某一项arr_a[i]<arr_b[i]*k因为少了质因子 ,那么一定就整除不开 ,
*/
/*
    n=5 n!=120  a=2 
    2*2*2*3*5=120
    对于120： 
    数组下标    2 3 4 5 6
    个数        3 1 0 1 0
    k=1  2^1=2
    数组下标    2 3 4 5 6
    个数        1 0 0 0 0
    k=2  2^2=4     
    数组下标    2 3 4 5 6
    个数        2 0 0 0 0
    k=3  2^3=8
    数组下标    2 3 4 5 6
    个数        3 0 0 0 0
    k=4  2^4=8
    数组下标    2 3 4 5 6
    个数        4 0 0 0 0   4>3不满足 
*/ 


//质因数分解
/*
    质因数分解不需要先打表质因数再分解
    直接遍历从2 3 4 5 6.....逐个分解
    类似于质因数打表筛选的原理,前面会筛选干净 
    后面的非质数不会被分解 ,只分解质数 
*/ 
int arr_a[10086];
int arr_b[10086];
void func(int n,int *a)
{
    int t=n,i=2;
    while(t!=1)
	{
        while(t!=1&&t%i==0)
		{
            a[i]++;
            t/=i;
        }
        a[0]=max(a[0],i);//0号位置记录最大质因子是多少 
        i++;
    }
} 
int judge()
{
    int k=1;
    while(1)
	{
        for(int i=2;i<=arr_a[0];i++)
		{
            if(arr_b[i]*k>arr_a[i])
            {
				return k;  
			}  
        }
        k++;
    }
    return -1;
}

int main()
{
	int n,a;
    cin>>n>>a;
    for(int i=2;i<=n;i++)
	{
        func(i,arr_a);
    }
    func(a,arr_b);    
    cout<<judge()-1<<endl;
    return 0;
} 
