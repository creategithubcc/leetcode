#include<iostream>
#include<String.h>
#include<vector>

using namespace std;

class Solution 
{
public:
    static string longestPalindrome(string s) 
	{
        const int len=s.size();//first��¼���ȣ�second��¼��ʼ�±�
        pair<int,int> ans=make_pair(1,0);/*std::pair��Ҫ�������ǽ�����������ϳ�һ�����ݣ��������ݿ�����ͬһ���ͻ��߲�ͬ���͡�
											C++��׼������з��ǡ����뷵������ֵ���ĺ����� Ҳ��������pair����
										class pair���Խ�����ֵ��Ϊһ����Ԫ���������map��multimap����ʹ��pairs�������佡ֵ/ʵֵ(key/value)�ĳɶ�Ԫ�ء�
										pair������Ϊstruct,��˿�ֱ�Ӵ�ȡpair�еĸ���ֵ.��
										����pairs����Ƚ�ʱ�� ��һ��Ԫ�������нϸߵ����ȼ�.��*/
        bool dp[len][len];
		memset(dp,0,sizeof(dp));
		int i,j;
		for(i=0;i<len;i++)
		{
			dp[i][i]=true; //������ĸ�ǻ���
		 } 
		 for(i=1;i<len;i++)
		 {
		 	if(s[i]==s[i-1])//�����ĸ��ȣ��ǻ���
		 	{
		 		dp[i][i-1]=true;//���´�
		 		ans=make_pair(2,i-1);
			 }
		 }
		 for(i=2;i<len;i++)
		 {
		 	for(j=i-2;j>=0;j--)//�˴���С�����������
		 	{
		 		if(s[i]==s[j]&&dp[i-1][j+1])//�������������м��ǻ���
		 		{
		 			dp[i][j]=true;
		 			ans=max(ans,make_pair(i-j+1,j));//ex  j=1,i=3,3-1  s[i][j],�Ӵ�С 
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

