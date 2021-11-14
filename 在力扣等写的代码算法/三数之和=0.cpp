#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
int compare(const void *a, const void *b)
{
  return *((int *)a) - *((int *)b);
}
int **threeSum(int *nums, int numsSize, int *returnSize, int **returnColumnSizes)
{// ���鳤��С��3��ֱ�ӷ��ؿ�����
  if (numsSize < 3)
  {
    *returnSize = 0;
    *returnColumnSizes = NULL;
    return NULL;
  }// �ȶ�������������������У�qsort�������κ�ֵ
  qsort(nums, numsSize, sizeof(int), compare);
  *returnSize = 0;// ����洢�ռ�
  int **returnArr = (int **)malloc(sizeof(int *) * (numsSize - 2) * (numsSize - 2));
  *returnColumnSizes = (int *)malloc(sizeof(int) * (numsSize - 2) * (numsSize - 2));// ��ʼ����ѭ������������nums
  for (int i = 0; i < numsSize; i++)
  {// ���Ԫ�ش���0��������Ԫ��Ҳ����0����ô����֮�Ϳ϶�����0,���Ե���ʱ�Ϳ���ֱ���˳�������
    if (nums[i] > 0)
    {
      break;
    }// ȥ�����ѭ�����ظ�ֵ
    if (i > 0 && nums[i] == nums[i - 1])
    {
      continue;
    }// ��¼��ָ���ʼ�±�
    int third = numsSize - 1;// ��¼���ѭ���±��Ӧ��ֵ������Ԫ��ĵ�һ��Ԫ��
    int oneNum = nums[i];
    for (int j = i + 1; j < numsSize; j++)
    {
      // ȥ����ָ��ָ����ظ�ֵ
      if (j > i + 1 && nums[j] == nums[j - 1])
      {
        continue;
      } // ȥ����ָ��ָ����ظ���ֵ
      while (j < third && nums[j] + nums[third] > -oneNum)
      {
        third--;
      }// ����ָ���غ�ʱ���˳��ڲ�ѭ��
      if (j == third)
      {
        break;      
      }// ��������������Ԫ�鱣�浽�������
      if (nums[j] + nums[third] == -oneNum)
      {
        returnArr[*returnSize] = (int *)malloc(sizeof(int) * 3);
        returnArr[*returnSize][0] = oneNum;
        returnArr[*returnSize][1] = nums[j];
        returnArr[*returnSize][2] = nums[third];
        (*returnColumnSizes)[*returnSize] = 3;
        *returnSize += 1;
      }
    }
  }
  return returnArr;
}
int main() 
{
  
  int nums[10086] = {};//{-1, 0, 1, 2, -1, -4};
  int numsSize ;
  while(1)
  {
		  scanf("%d",&numsSize);
		  for(int i=0;i<numsSize;i++)
		  {
		  		scanf("%d",&nums[i]);
		  }
		  int returnSize;
		  int *returnColumnSizes = NULL;
		  int **returnArr = threeSum(nums, numsSize, &returnSize, &returnColumnSizes);
		  for (int i = 0; i < returnSize; i++) 
		  {
		    printf("%d %d %d\n", returnArr[i][0], returnArr[i][1], returnArr[i][2]);
		  }
  }
  return 0;
}
