#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
int compare(const void *a, const void *b)
{
  return *((int *)a) - *((int *)b);
}
int **threeSum(int *nums, int numsSize, int *returnSize, int **returnColumnSizes)
{// 数组长度小于3则直接返回空数组
  if (numsSize < 3)
  {
    *returnSize = 0;
    *returnColumnSizes = NULL;
    return NULL;
  }// 先对数组进行排序，升序排列，qsort不返回任何值
  qsort(nums, numsSize, sizeof(int), compare);
  *returnSize = 0;// 分配存储空间
  int **returnArr = (int **)malloc(sizeof(int *) * (numsSize - 2) * (numsSize - 2));
  *returnColumnSizes = (int *)malloc(sizeof(int) * (numsSize - 2) * (numsSize - 2));// 开始二重循环，遍历数组nums
  for (int i = 0; i < numsSize; i++)
  {// 如果元素大于0，则其后的元素也大于0，那么三数之和肯定大于0,所以到此时就可以直接退出遍历了
    if (nums[i] > 0)
    {
      break;
    }// 去除外层循环的重复值
    if (i > 0 && nums[i] == nums[i - 1])
    {
      continue;
    }// 记录右指针初始下标
    int third = numsSize - 1;// 记录外层循环下标对应的值，即三元组的第一个元素
    int oneNum = nums[i];
    for (int j = i + 1; j < numsSize; j++)
    {
      // 去除左指针指向的重复值
      if (j > i + 1 && nums[j] == nums[j - 1])
      {
        continue;
      } // 去除右指针指向的重复的值
      while (j < third && nums[j] + nums[third] > -oneNum)
      {
        third--;
      }// 左右指针重合时，退出内层循环
      if (j == third)
      {
        break;      
      }// 将满足条件的三元组保存到结果数组
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
