#include<iostream>
#include<String.h>
#include<vector>

using namespace std;

class Solution 
{
public:
    static string longestPalindrome(string s) 
	{
        const int len=s.size();//first记录长度，second记录初始下标
        pair<int,int> ans=make_pair(1,0);/*std::pair主要的作用是将两个数据组合成一个数据，两个数据可以是同一类型或者不同类型。
											C++标准程序库中凡是“必须返回两个值”的函数， 也都会利用pair对象。
										class pair可以将两个值视为一个单元。容器类别map和multimap就是使用pairs来管理其健值/实值(key/value)的成对元素。
										pair被定义为struct,因此可直接存取pair中的个别值.。
										两个pairs互相比较时， 第一个元素正具有较高的优先级.。*/
        bool dp[len][len];
		memset(dp,0,sizeof(dp));
		int i,j;
		for(i=0;i<len;i++)
		{
			dp[i][i]=true; //单个字母是回文
		 } 
		 for(i=1;i<len;i++)
		 {
		 	if(s[i]==s[i-1])//如果字母相等，是回文
		 	{
		 		dp[i][i-1]=true;//更新答案
		 		ans=make_pair(2,i-1);
			 }
		 }
		 for(i=2;i<len;i++)
		 {
		 	for(j=i-2;j>=0;j--)//此处由小到大遍历区间
		 	{
		 		if(s[i]==s[j]&&dp[i-1][j+1])//如果两端相等且中间是回文
		 		{
		 			dp[i][j]=true;
		 			ans=max(ans,make_pair(i-j+1,j));//ex  j=1,i=3,3-1  s[i][j],从大到小 
				 }
			 }
		 }
		 return string(s,ans.second,ans.first); 
    }
};

int main() 
{
    
    string str ;
    cin >> str ;
    Solution solution;
    cout << solution.longestPalindrome(str) << endl;
}

