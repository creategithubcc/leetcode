#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>

using namespace std;
 
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int *answer=(int*)malloc(sizeof(int)*2);
    *returnSize=2;
    for(int i=0;i<numsSize-1;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                 
                 answer[0]=i;
                 answer[1]=j;
                 return answer;
            }
           /* else
			{
				cout<<"输入的数字相加不符合!"<<endl;
				return 0;
			}*/
        }
    }
    return answer;
}

int main()
{
	int i,numssize,target;
	int nums[10086]={};
	int returnSize[2]={};
	int *ans=returnSize; 
	
	/*cin>>numssize;
	for(i=0;i<numssize;i++)
	{
		cin>>nums[i];
	}*/
	//cin>>target;
	
	i=0;
	while(scanf("%d",&nums[i])!=EOF)
	{
		i++;
	}
	numssize=i;
	scanf("%d",&target);
	
	ans=twoSum( nums,numssize, target,returnSize);
	
	//cout<<*ans<<" "<<*(ans+1)<<endl;
	printf("%d,%d\n",*ans,*(ans+1));
}
